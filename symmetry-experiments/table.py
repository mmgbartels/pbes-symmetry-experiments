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
    if text is None or text == "":
        return "-"
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
    return s if s.strip() else "-"


def format_float(x: Any, digits: int = 3) -> str:
    """General float formatter for non-time fields. '-' for missing."""
    if x is None or x == "":
        return "-"
    try:
        f = float(x)
        txt = f"{f:.{digits}f}".rstrip("0").rstrip(".")
        return txt if txt else "-"
    except (ValueError, TypeError):
        return "-"


def format_time(x: Any, digits: int = 3) -> str:
    """
    TIMEOUT-AWARE FORMATTER:
    - If x is None or "" => timeout => 't-o'
    - If number exists => formatted number
    - If broken value => '-'
    """
    if x is None or x == "":
        return "t-o"
    try:
        f = float(x)
        txt = f"{f:.{digits}f}".rstrip("0").rstrip(".")
        return txt if txt else "t-o"
    except (ValueError, TypeError):
        return "-"


def format_answer(ans: Any) -> str:
    if ans is None or ans == "":
        return "-"
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
            parts.append(f"${size}$")
        else:
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

            # Original
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

            # First
            first = prop_content.get("first", {})
            if isinstance(first, dict):
                symmetry_used = first.get("symmetry_used", "")
                pb = first.get("pbessolve")
                sym_func = first.get("pbessymmetry", {})
                detection = sym_func.get("totaltime") if isinstance(sym_func, dict) else None

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

            # Chosen
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
# Aggregation (NEW FORMAT)
# -----------------------

def aggregate_rows(all_files_rows: List[List[Dict[str, Any]]]) -> List[Dict[str, Any]]:
    from collections import defaultdict

    agg = defaultdict(lambda: {
        "original": {"answers": set(), "bes_eqs": set(), "instantiation": [], "solving": []},
        "first": {"answers": set(), "bes_eqs": set(), "instantiation": [], "solving": [],
                  "symmetry_detection": []},
        "chosen": {"answers": set(), "bes_eqs": set(), "instantiation": [], "solving": []},
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

            for tf in TIME_FIELDS:
                v = r.get(tf)
                if v not in (None, ""):
                    try:
                        tgt[tf].append(float(v))
                    except:
                        pass

            if "symmetry_detection" in r and r["symmetry_detection"] not in (None, ""):
                try:
                    b["first"]["symmetry_detection"].append(float(r["symmetry_detection"]))
                except:
                    pass

    def avg(xs):
        return sum(xs) / len(xs) if xs else None

    aggregated = []

    for (model, prop), b in agg.items():

        # Determine answer
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

        # Times
        original_time = avg([i + s for i, s in zip(b["original"]["instantiation"], b["original"]["solving"])])
        first_solve = avg([i + s for i, s in zip(b["first"]["instantiation"], b["first"]["solving"])])
        detect = avg(b["first"]["symmetry_detection"])
        chosen_time = avg([i + s for i, s in zip(b["chosen"]["instantiation"], b["chosen"]["solving"])])

        if first_solve is None and detect is None :
            first_time = "-"

        elif first_solve is None :
            first_time = "t-o"

        else:
            first_time = f"{format_time(first_solve)}"

        if detect is None:
            detection_cell = "t-o"
        else:
            detection_cell = f"+{format_time(detect)}"

        aggregated.append({
            "model": model or "-",
            "property": prop or "-",
            "answer": "-" if result_answer == "" else format_answer(result_answer),

            "original_v": next(iter(b["original"]["bes_eqs"]), "-") or "-",
            "first_v": next(iter(b["first"]["bes_eqs"]), "-") or "-",
            "chosen_v": next(iter(b["chosen"]["bes_eqs"]), "-") or "-",

            "original_time": original_time,
            "first_time": first_time,
            "detection": detection_cell,     # NEW position
            "chosen_time": chosen_time,
        })

    aggregated.sort(key=lambda r: (r["model"], r["property"]))
    return aggregated


# -----------------------
# CSV export
# -----------------------

def write_csv(rows: List[Dict[str, Any]], path: str, digits: int):
    fields = [
        "model", "property", "answer",
        "original_v", "first_v", "chosen_v",
        "original_time", "first_time", "detection", "chosen_time"  # detection between first_time and chosen_time
    ]

    with open(path, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(fields)

        for r in rows:
            w.writerow([
                r["model"],
                r["property"],
                r["answer"],

                r["original_v"],
                r["first_v"],
                r["chosen_v"],

                format_time(r["original_time"]),
                # Note: first_time may be a composed string like "a + b"; original script used format_time,
                # keeping behavior consistent with minimal change request.
                format_time(r["first_time"]),
                r["detection"],
                format_time(r["chosen_time"]),
            ])

    print(f"Wrote CSV to: {path}")


# -----------------------
# LaTeX rendering
# -----------------------

def build_latex_document(rows: List[Dict[str, Any]], title: str, digits: int) -> str:
    header = [
        "", "", "",
        "\\multicolumn{3}{c|}{$|V|$}",
        "\\multicolumn{4}{c}{Time}",  # Time now spans 4 columns
    ]

    subheader = [
        "Model",
        "Property",
        "Result",
        "\\multicolumn{1}{c}{Original}",
        "\\multicolumn{1}{c}{First}",
        "\\multicolumn{1}{c|}{Chosen}",
        "\\multicolumn{1}{c}{Original}",
        "\\multicolumn{1}{c}{First}",
        "\\multicolumn{1}{c}{Detection}",  # Detection between First and Chosen
        "\\multicolumn{1}{c}{Chosen}",
    ]

    def fmt_cell(x):
        if isinstance(x, str):
            return x if x.strip() else "-"
        else:
            txt = format_time(x)
            return txt if txt.strip() else "-"

    body_rows = []
    for r in rows:
        body_rows.append(" & ".join([
            latex_escape(r["model"]),
            latex_escape(r["property"]),
            r["answer"],

            latex_escape(r["original_v"]),
            latex_escape(r["first_v"]),
            latex_escape(r["chosen_v"]),

            fmt_cell(r["original_time"]),
            fmt_cell(r["first_time"]),
            latex_escape(r["detection"]),     # Detection here, between first and chosen
            fmt_cell(r["chosen_time"]),
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
\\begin{{tabular}}{{llc|rrr|rrrr}}
{" & ".join(header)} \\\\
\\midrule
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

    csv_path = args.csv or None

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

    tex = build_latex_document(aggregated, args.title, args.digits)
    with open(out_path, "w", encoding="utf-8") as f:
        f.write(tex)
    print(f"Wrote LaTeX to: {out_path}")

    if csv_path:
        write_csv(aggregated, csv_path, args.digits)


if __name__ == "__main__":
    main()
