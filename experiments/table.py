#!/usr/bin/env python3
import argparse
import os
import sys
import re
import csv
from typing import Any, Dict, List
from collections import Counter

try:
    import yaml
except ImportError:
    print("This script requires PyYAML. Install it with: pip install pyyaml", file=sys.stderr)
    sys.exit(1)


# -----------------------
# Helpers
# -----------------------

def latex_escape(text: Any) -> str:
    if text is None:
        return ""
    s = str(text)
    replacements = {
        "\\": r"\textbackslash{}",
        "&": r"\&",
        "%": r"\%",
        "#": r"\#",
        "_": r"\_",
        "{": r"\{",
        "}": r"\}",
        "~": r"\textasciitilde{}",
    }
    for k, v in replacements.items():
        s = s.replace(k, v)
    return s


def format_float(x: Any, digits: int = 3) -> str:
    if x is None or x == "":
        return ""
    try:
        f = float(x)
        return f"{f:.{digits}f}".rstrip("0").rstrip(".")
    except (ValueError, TypeError):
        return str(x)


def format_answer(ans: Any) -> str:
    if ans is None:
        return ""
    s = str(ans).lower()
    if s == "true":
        return r"$\checkmark$"
    if s == "false":
        return r"$\times$"
    return str(ans)


TIME_FIELDS = ("instantiation", "solving")


def permutation_size_str(perm: str) -> str:
    if not perm or perm.strip() == "()":
        return "1"

    cycles = re.findall(r'\((.*?)\)', perm)
    sizes = [len(cycle.split()) for cycle in cycles if cycle.strip()]
    if not sizes:
        return "1"

    count = Counter(sizes)
    parts = []
    for size in sorted(count.keys()):
        if count[size] == 1:
            # wrap single sizes in math mode
            parts.append(f"${size}$")
        else:
            # wrap exponent form in math mode
            parts.append(f"${size}^{count[size]}$")

    return " * ".join(parts)


# -----------------------
# Parsing YAML
# -----------------------

def collect_rows_from_yaml(data: Dict[str, Any]) -> List[Dict[str, Any]]:
    rows = []

    for model, model_content in (data or {}).items():
        if not isinstance(model_content, dict):
            continue

        for prop, prop_content in model_content.items():
            if not isinstance(prop_content, dict):
                continue

            # -------- Original --------
            original = prop_content.get("original", {})
            if isinstance(original, dict):
                pb = original.get("pbessolve")
                if isinstance(pb, dict):
                    rows.append({
                        "model": model,
                        "property": prop,
                        "variant": "original",
                        "answer": pb.get("answer", ""),
                        "bes_eqs": pb.get("generated_bes_equations", ""),
                        "instantiation": pb.get("instantiation"),
                        "solving": pb.get("solving"),
                    })

            # -------- First --------
            first = prop_content.get("first", {})
            if isinstance(first, dict):
                symmetry_used = first.get("symmetry_used", "")
                pb = first.get("pbessolve")
                sym_func = first.get("pbessymmetry", {})
                detection = sym_func.get("totaltime") if isinstance(
                    sym_func, dict) else None

                if isinstance(pb, dict):
                    rows.append({
                        "model": model,
                        "property": prop,
                        "variant": "first",
                        "answer": pb.get("answer", ""),
                        "bes_eqs": pb.get("generated_bes_equations", ""),
                        "instantiation": pb.get("instantiation"),
                        "solving": pb.get("solving"),
                        "symmetry_used": permutation_size_str(symmetry_used),
                        "symmetry_detection": detection
                    })

            # -------- Chosen --------
            chosen = prop_content.get("chosen", {})
            if isinstance(chosen, dict):
                symmetry_used = chosen.get("symmetry_used", "")
                pb = chosen.get("pbessolve")
                if isinstance(pb, dict):
                    rows.append({
                        "model": model,
                        "property": prop,
                        "variant": "chosen",
                        "answer": pb.get("answer", ""),
                        "bes_eqs": pb.get("generated_bes_equations", ""),
                        "instantiation": pb.get("instantiation"),
                        "solving": pb.get("solving"),
                        "symmetry_used": permutation_size_str(symmetry_used),
                    })

    return rows


# -----------------------
# Aggregation
# -----------------------

def aggregate_rows(all_files_rows: List[List[Dict[str, Any]]]) -> List[Dict[str, Any]]:
    from collections import defaultdict

    agg = defaultdict(lambda: {
        "original": {"answers": set(), "bes_eqs": set(), "instantiation": [], "solving": []},
        "first": {"answers": set(), "bes_eqs": set(), "instantiation": [], "solving": [],
                  "symmetry_detection": None, "symmetry_used": set()},
        "chosen": {"answers": set(), "bes_eqs": set(), "instantiation": [], "solving": [],
                   "symmetry_used": set()},
    })

    for rows in all_files_rows:
        seen = set()
        for r in rows:
            key = (r["model"], r["property"], r["variant"])
            if key in seen:
                continue
            seen.add(key)

            b = agg[(r["model"], r["property"])]
            tgt = b[r["variant"]]

            if r.get("answer"):
                tgt["answers"].add(str(r["answer"]))

            if r.get("bes_eqs"):
                tgt["bes_eqs"].add(str(r["bes_eqs"]))

            if r.get("symmetry_used"):
                tgt["symmetry_used"].add(str(r["symmetry_used"]))

            for tf in TIME_FIELDS:
                v = r.get(tf)
                if v not in (None, ""):
                    try:
                        tgt[tf].append(float(v))
                    except:
                        pass

            if r.get("symmetry_detection") not in (None, ""):
                try:
                    b["first"]["symmetry_detection"] = float(
                        r["symmetry_detection"])
                except:
                    pass

    def avg(xs):
        return sum(xs) / len(xs) if xs else None

    aggregated = []

    for (model, prop), b in agg.items():

        # Compare answers across variants
        all_answers = []
        for variant in ("original", "first", "chosen"):
            all_answers.extend(a for a in b[variant]["answers"] if a)

        if len(set(all_answers)) > 1:
            result_answer = "?"
        else:
            if b["chosen"]["answers"]:
                result_answer = next(iter(b["chosen"]["answers"]))
            elif b["original"]["answers"]:
                result_answer = next(iter(b["original"]["answers"]))
            else:
                result_answer = ""

        aggregated.append({
            "model": model,
            "property": prop,
            "answer": "?" if result_answer == "?" else format_answer(result_answer),

            "original_v": next(iter(b["original"]["bes_eqs"]), ""),
            "original_runtime": avg([i + s for i, s in zip(b["original"]["instantiation"], b["original"]["solving"])]),

            "first_detection": b["first"]["symmetry_detection"],
            "first_symmetry": next(iter(b["first"]["symmetry_used"]), ""),
            "first_v": next(iter(b["first"]["bes_eqs"]), ""),
            "first_runtime": avg([i + s for i, s in zip(b["first"]["instantiation"], b["first"]["solving"])]),

            "chosen_symmetry": next(iter(b["chosen"]["symmetry_used"]), ""),
            "chosen_v": next(iter(b["chosen"]["bes_eqs"]), ""),
            "chosen_runtime": avg([i + s for i, s in zip(b["chosen"]["instantiation"], b["chosen"]["solving"])]),
        })

    aggregated.sort(key=lambda r: (r["model"], r["property"]))
    return aggregated


def latex_to_bool(x: str) -> str:
    if not isinstance(x, str):
        return x
    if x.strip() == r"$\checkmark$":
        return "true"
    if x.strip() == r"$\times$":
        return "false"
    return x


# -----------------------
# CSV export
# -----------------------

def write_csv(rows: List[Dict[str, Any]], path: str, digits: int):
    fields = [
        "model", "property", "answer",
        "original_v", "original_runtime",
        "first_detection", "first_symmetry", "first_v", "first_runtime",
        "chosen_symmetry", "chosen_v", "chosen_runtime"
    ]

    def fmt(x):
        s = format_float(x, digits)
        return s if s != "" else "t-o"

    def fmt_symmetry(s):
        return s.replace("$", "")

    with open(path, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(fields)

        for r in rows:
            w.writerow([
                r["model"],
                r["property"],
                latex_to_bool(r["answer"]),
                r["original_v"],
                fmt(r["original_runtime"]),
                fmt(r["first_detection"]),
                fmt_symmetry(r["first_symmetry"]),
                r["first_v"],
                fmt(r["first_runtime"]),
                fmt_symmetry(r["chosen_symmetry"]),
                r["chosen_v"],
                fmt(r["chosen_runtime"]),
            ])

    print(f"Wrote CSV to: {path}")


# -----------------------
# LaTeX rendering
# -----------------------

def build_latex_document(rows: List[Dict[str, Any]], title: str, digits: int) -> str:
    header = [
        "", "", "",
        "\\multicolumn{2}{c|}{Original}",
        "\\multicolumn{4}{c|}{First}",
        "\\multicolumn{3}{c}{Chosen}",
    ]

    subheader = [
        "Model",
        "Property",
        "Result",
        r"$|V|$",
        "Time",
        "Detection",
        "$\\pi$",
        r"$|V|$",
        "Time",
        "$\\pi$",
        r"$|V|$",
        "Time",
    ]

    def format_time_or_to(x: Any, d: int) -> str:
        s = format_float(x, d)
        return s if s != "" else "t-o"

    body_rows = []
    for r in rows:
        body_rows.append(" & ".join([
            latex_escape(r["model"]),
            latex_escape(r["property"]),
            r["answer"],

            latex_escape(r["original_v"]),
            format_time_or_to(r["original_runtime"], digits),

            format_time_or_to(r["first_detection"], digits),
            latex_escape(r["first_symmetry"]),
            latex_escape(r["first_v"]),
            format_time_or_to(r["first_runtime"], digits),

            latex_escape(r["chosen_symmetry"]),
            latex_escape(r["chosen_v"]),
            format_time_or_to(r["chosen_runtime"], digits),
        ]))

    body = " \\\\\n".join(body_rows)

    return f"""\\documentclass{{article}}
\\usepackage[table]{{xcolor}}
\\usepackage{{booktabs}}
\\usepackage{{geometry}}
\\usepackage{{graphicx}}
\\usepackage{{amssymb}}
\\geometry{{margin=1in}}

\\definecolor{{rowgray}}{{gray}}{{0.9}}

\\title{{{latex_escape(title)}}}
\\date{{}}

\\begin{{document}}
\\maketitle

\\begin{{table}}[ht]
\\centering
\\small

\\resizebox{{\\linewidth}}{{!}}{{%
\\rowcolors{{3}}{{white}}{{rowgray}}
\\begin{{tabular}}{{llc|rr|rrrr|rrr}}
{" & ".join(header)} \\\\
{" & ".join(subheader)} \\\\
\\midrule
{body} \\\\
\\bottomrule
\\end{{tabular}}
}}
\\caption{{{latex_escape(title)}}}
\\end{{table}}

\\end{{document}}
"""


def print_csv_pretty(path: str):

    rows = []
    with open(path, "r", encoding="utf-8") as f:
        reader = csv.reader(f)
        rows = list(reader)

    if not rows:
        print("CSV is empty.")
        return

    # Compute max width per column
    num_cols = len(rows[0])
    col_widths = [0] * num_cols

    for row in rows:
        for i, cell in enumerate(row):
            col_widths[i] = max(col_widths[i], len(cell))

    # Pretty print
    print("\n=== CSV Output ===")
    for r_idx, row in enumerate(rows):
        padded = [
            cell.ljust(col_widths[i])
            for i, cell in enumerate(row)
        ]
        line = " | ".join(padded)
        print(line)
        if r_idx == 0:
            print("-" * len(line))
    print("==================\n")


# -----------------------
# CLI
# -----------------------

def main():
    parser = argparse.ArgumentParser(
        description="Aggregate PBES benchmark YAML files into LaTeX/CSV tables."
    )
    parser.add_argument("inputs", nargs="+", help="Input YAML file(s).")
    parser.add_argument("-o", "--output", help="Output LaTeX file (.tex).")
    parser.add_argument("--csv", help="Output CSV file (.csv).")
    parser.add_argument("--title", default="Benchmark Results")
    parser.add_argument("--digits", type=int, default=3)
    args = parser.parse_args()

    out_path = args.output or os.path.join(
        os.path.dirname(os.path.abspath(args.inputs[0])), "table.tex"
    )

    csv_path = args.output or os.path.join(
        os.path.dirname(os.path.abspath(args.inputs[0])), "table.csv"
    )

    csv_path = args.csv or csv_path

    all_rows = []
    for path in args.inputs:
        with open(path, "r", encoding="utf-8") as f:
            data = yaml.safe_load(f)
        if isinstance(data, dict):
            all_rows.append(collect_rows_from_yaml(data))

    if not all_rows:
        print("No valid input files.", file=sys.stderr)
        sys.exit(1)

    aggregated = aggregate_rows(all_rows)

    # Write LaTeX
    tex = build_latex_document(aggregated, args.title, args.digits)
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(tex)
    print(f"Wrote LaTeX to: {out_path}")

    # Write CSV
    if csv_path:
        write_csv(aggregated, csv_path, args.digits)
        print_csv_pretty(csv_path)


if __name__ == "__main__":
    main()
