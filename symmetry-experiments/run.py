import pathlib
import subprocess
import os.path
import logging
import time
import yaml
import re
import argparse
import shutil

USELIMITS = True
# Timeout in Seconds
TIMEOUT = 1800
# Memlimit in KBytes
MEMLIMIT = 64 * 1024 * 1024
_TIMEOUTSCRIPT = os.path.join(os.path.dirname(
    os.path.realpath(__file__)), "timeout")

# Path to MCRL2
mcrl2_Path = os.path.join(os.path.dirname(os.path.realpath(
    __file__)), '../../../mcrl2experimentalinstall/mCRL2/stage/bin/')

# path to folder 'properties'
prop_path = os.path.abspath(os.path.join(
    os.path.split(__file__)[0], 'properties'))

# Set of models
MODELS_XS = {"mutex"}
MODELS_S = {"mutex", "dining3"}  # Default
MODELS_M = {"mutex",
            "dining3", "dining4",
            "routing3", "routing4",
            "alloc3", "alloc4"}
MODELS_L = {"mutex",
            "dining3", "dining4", "dining5", "dining6", "dining7",
            "routing3", "routing4", "routing5", "routing6", "routing7",
            "alloc3", "alloc4", "alloc5", "alloc6", "alloc7"}
MODELS_XL = {"mutex",
             "dining3", "dining4", "dining5", "dining6", "dining7", "dining8",
             "routing3", "routing4", "routing5", "routing6", "routing7", "routing8",
             "alloc3", "alloc4", "alloc5", "alloc6", "alloc7", "alloc8"}

WORKFLOWS_FIRST_CHOSEN = ["original", "chosen", "first"]  # Default
WORKFLOWS_CHOSEN = ["chosen"]
WORKFLOWS_FIRST = ["original", "first"]
WORKFLOWS_ALL = ["original", "all"]

REWRITEPROPERTIES = ["no_conf_before_req", "no_con_query", "no_inf_eat"]


class ToolException(Exception):
    def __init__(self, tool, exitcode, result):
        Exception.__init__(self)
        self.result = result
        self.__ret = exitcode
        self.__cmdline = ' '.join(tool)

    def __str__(self):
        return 'The commandline "{0}" failed for ToolException with exit code "{1}".\nStandard error and output:\n{2}\n'.format(
            self.__cmdline, self.__ret, self.result['err'])


class Timeout(Exception):
    def __init__(self, cmdline, result):
        super(Timeout, self).__init__()
        self.__cmdline = ' '.join(cmdline)
        self.result = result

    def __str__(self):
        return 'The commandline "{0}" timed out'.format(self.__cmdline)


class OutOfMemory(Exception):
    def __init__(self, cmdline, result):
        super(OutOfMemory, self).__init__()
        self.__cmdline = ' '.join(cmdline)
        self.result = result


def split_input_filename(input_path):
    """Split the input path into directory and basename of the file"""
    dirname, file = os.path.split(input_path)
    base, ext = os.path.splitext(file)
    return dirname, base


def mcrl2_filepath(dirname, root):
    """Returns dirname/root.mcrl2"""
    mcrl2_filename = "{}.mcrl2".format(root)
    return os.path.join(dirname, mcrl2_filename)


def lps_filepath(dirname, root, hint=None):
    """Returns dirname/root(.hint).lps. .hint is omitted if hint is none"""
    if hint:
        return os.path.join(dirname, "{}.{}.lps".format(root, hint))
    else:
        return os.path.join(dirname, "{}.lps".format(root))


def pbes_filepath(dirname, root, property_name, hint=None):
    """Returns dirname/root.property_name(.hint).pbes. .hint is omitted if hint is none"""
    if hint and hint != "original":
        return os.path.join(dirname, "{}.{}.{}.pbes".format(root, property_name, hint))

    else:
        return os.path.join(dirname, "{}.{}.pbes".format(root, property_name))


def property_filepath(dirname, property_name):
    """Returns dirname/root.mcf"""
    mcf_filename = "{}.mcf".format(property_name)
    return os.path.join(dirname, mcf_filename)


def regex_explicit(input):
    if re.match(r"(?s:.*)Generated ([+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?)", input):
        result = re.match(
            r"(?s:.*)Generated ([+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?)", input)
    else:
        result = ''
    return result


def regex_solve(input):
    if re.match(r"(?s:.*)solving:( *)([+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?)", input):
        result = re.match(
            r"(?s:.*)solving:( *)([+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?)", input)
    else:
        result = ''
    return result


def regex_inst(input):
    if re.match(r"(?s:.*)instantiation:( *)([+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?)", input):
        result = re.match(
            r"(?s:.*)instantiation:( *)([+\-]?(?:0|[1-9]\d*)(?:\.\d+)?(?:[eE][+\-]?\d+)?)", input)
    else:
        result = ''
    return result


def regex_symmetries(input):
    line_re = re.compile(r"^.*Found symmetry:\s*(.+)$", re.MULTILINE)

    symmetries = []
    for m in line_re.finditer(input):
        tail = m.group(1).strip()
        if re.search(r"\([^)]*\)", tail):
            symmetries.append(tail)
    return symmetries


def cycles_to_function_notation(cycles_str):
    cycle_texts = re.findall(r"\(([^()]*)\)", cycles_str)

    mapping_pairs = []
    for ctext in cycle_texts:
        ctext = ctext.strip()
        if not ctext:
            continue

        if " " not in ctext and re.fullmatch(r"\d+", ctext):
            elements = list(ctext)
        else:
            elements = re.findall(r"\d+", ctext)

        if len(elements) == 1:
            a = elements[0]
            mapping_pairs.append((a, a))
        else:
            for i in range(len(elements)):
                src = elements[i]
                dst = elements[(i + 1) % len(elements)]
                mapping_pairs.append((src, dst))

    if not mapping_pairs:
        return "[]"

    return "[ " + ", ".join(f"{a} -> {b}" for a, b in mapping_pairs) + " ]"


def element_with_longest_cycle(cycle_list):
    def longest_cycle_length(cycle_str):
        cycles = re.findall(r'\((.*?)\)', cycle_str)
        lengths = [len(c.split()) for c in cycles]
        return max(lengths) if lengths else 0
    return max(cycle_list, key=longest_cycle_length)


def get_chosen_symmetry(model, property):
    path = f"symmetries/{model}/{model}_{property}.txt"

    with open(path, "r") as f:
        return f.read()


def listToString(s):
    str1 = ""
    return (str1.join(s))


def run_command(mcrl2_path, tool, options, input_file, output_file=None, timeout=None, memlimit=None):
    data = {}
    data["options"] = listToString(options)
    data["input_file"] = input_file
    output_file_arg = []
    if output_file:
        data["output_file"] = output_file
        output_file_arg = [output_file]
    command = [os.path.join(mcrl2_path, tool)] + \
        options + [input_file] + output_file_arg
    start_time = time.time()  # Start time of the command execution
    timeoutcmd = []
    if (timeout is not None or memlimit is not None) and USELIMITS:
        if not os.path.exists(_TIMEOUTSCRIPT):
            logging.error(
                'The script {0} does not exists, cannot run without it'.format(_TIMEOUTSCRIPT))
            raise Exception('File {0} not found'.format(_TIMEOUTSCRIPT))

        timeoutcmd += [_TIMEOUTSCRIPT, '--confess', '--no-info-on-success']
        if timeout is not None:
            timeoutcmd += ['-t', str(timeout)]
        if memlimit is not None:
            timeoutcmd += ['-m', str(memlimit)]

        command = timeoutcmd + command

    proc = subprocess.run(command, check=False, capture_output=True, text=True)

    if proc.returncode != 0:
        # Filter the output to see whether we exceeded time or memory:
        TIMEOUT_RE = 'TIMEOUT CPU (?P<cpu>\d+[.]\d*) MEM (?P<mem>\d+) MAXMEM (?P<maxmem>\d+) STALE (?P<stale>\d+)'
        m = re.search(TIMEOUT_RE, str(proc.stderr), re.DOTALL)
        if m is not None:
            data['times'] = 'timeout'
            raise Timeout(command, data)

        MEMLIMIT_RE = 'MEM CPU (?P<cpu>\d+[.]\d*) MEM (?P<mem>\d+) MAXMEM (?P<maxmem>\d+) STALE (?P<stale>\d+)'
        m = re.search(MEMLIMIT_RE, str(proc.stderr), re.DOTALL)
        if m is not None:
            data['times'] = 'outofmemory'
            raise OutOfMemory(command, data)

        MDD = 'MDD Unique table full(.*)'
        mdd = re.search(MDD, str(proc.stderr))
        if mdd is not None:
            print('MDD Unique table full')
            data['error'] = 'MDD Unique table full'
        SRF = 'The PBES after removing counter example information(.*)'
        srf = re.search(SRF, str(proc.stderr))
        if srf is not None:
            print('PBES is not in SRF')
            data['error'] = "PBES is not in SRF"

        raise ToolException(command, proc.returncode, {
                            'err': proc.stderr, 'out': proc.stdout})

    end_time = time.time()
    elapsed_time = end_time - start_time
    logging.debug(proc.stderr)
    data["totaltime"] = float('%.3f' % (elapsed_time))

    if "merc-pbes" in os.path.join(mcrl2_path, tool):
        string = str(proc.stderr)
        symmetries = regex_symmetries(string)
        data["symmetries"] = symmetries

    if "pbessolve" in os.path.join(mcrl2_path, tool):
        if re.match(r"false", str(proc.stdout)):
            data["answer"] = 'false'
            ans = 'false'
        elif re.match(r"true", str(proc.stdout)):
            data["answer"] = 'true'
            ans = 'true'
        else:
            data["answer"] = '-'
            ans = '-'
        print("Answer {}".format(ans))
        # to save the specific times
        string = str(proc.stderr)
        resultinst = regex_inst(string)
        data["instantiation"] = eval(resultinst.group(2))
        inst = eval(resultinst.group(2))
        resultsolve = regex_solve(string)
        data["solving"] = eval(resultsolve.group(2))
        sol = eval(resultsolve.group(2))
        ttime = inst + sol
        print("Time {}".format(ttime))
        data['time'] = float('%.3f' % (ttime))

        # to save the number of BES equations
        string = str(proc.stderr)
        result = regex_explicit(string)
        if result != '':
            data["generated_bes_equations"] = eval(result.group(1))
            print("Generated vertices in parity game {}".format(
                str(result.group(1))))
        else:
            data["generated_bes_equations"] = 0
            print('empty')

    return data


def run_command_2(mcrl2_path, tool, options, input_file, input_file2, output_file=None, timeout=None, memlimit=None):
    data = {}
    data["options"] = listToString(options)
    data["mcf_file"] = input_file
    data["lps_file"] = input_file2
    output_file_arg = []
    if output_file:
        data["output_file"] = output_file
        output_file_arg = [output_file]
    command = [os.path.join(mcrl2_path, tool)] + options + \
        [input_file] + [input_file2] + output_file_arg
    start_time = time.time()  # Start time of the command execution

    timeoutcmd = []
    if (timeout is not None or memlimit is not None) and USELIMITS:
        if not os.path.exists(_TIMEOUTSCRIPT):
            logging.error(
                'The script {0} does not exists, cannot run without it'.format(_TIMEOUTSCRIPT))
            raise Exception('File {0} not found'.format(_TIMEOUTSCRIPT))

        timeoutcmd += [_TIMEOUTSCRIPT, '--confess', '--no-info-on-success']
        if timeout is not None:
            timeoutcmd += ['-t', str(timeout)]
        if memlimit is not None:
            timeoutcmd += ['-m', str(memlimit)]

        command = timeoutcmd + command

    proc = subprocess.run(command, check=False, capture_output=True, text=True)

    if proc.returncode != 0:
        # Filter the output to see whether we exceeded time or memory:
        TIMEOUT_RE = 'TIMEOUT CPU (?P<cpu>\d+[.]\d*) MEM (?P<mem>\d+) MAXMEM (?P<maxmem>\d+) STALE (?P<stale>\d+)'
        m = re.search(TIMEOUT_RE, str(proc.stderr), re.DOTALL)
        if m is not None:
            data['times'] = 'timeout'
            raise Timeout(command, data)

        MEMLIMIT_RE = 'MEM CPU (?P<cpu>\d+[.]\d*) MEM (?P<mem>\d+) MAXMEM (?P<maxmem>\d+) STALE (?P<stale>\d+)'
        m = re.search(MEMLIMIT_RE, str(proc.stderr), re.DOTALL)
        if m is not None:
            data['times'] = 'outofmemory'
            raise OutOfMemory(command, data)
        raise ToolException(command, proc.returncode, {
                            'err': proc.stderr, 'out': proc.stdout})

    end_time = time.time()
    elapsed_time = end_time - start_time
    logging.debug(proc.stderr)
    data["totaltime"] = float('%.3f' % (elapsed_time))
    return data


def mcrl2_to_lps(dirname, root, mcrl2=mcrl2_Path):
    mcrl2file = mcrl2_filepath(dirname, root)
    lpsfile = lps_filepath(dirname, root)

    logging.info("Translating mCRL2 specification {} to LPS {}".format(
        mcrl2file, lpsfile))
    data = run_command(mcrl2, "mcrl22lps", ["-nf"], mcrl2file, lpsfile)
    logging.info("Successfully finished translating mCRL2 specification.")

    return data


# This version of mcrl22lps uses lpssuminst, lpsfununfold and lpsrewr
# for for models that use sums and function types.
def mcrl2_to_lps_suminst_fununfold(dirname, root, mcrl2=mcrl2_Path):
    mcrl2file = mcrl2_filepath(dirname, root)
    lpsfiletmp = lps_filepath(dirname, root, "tmp")
    lpsfile = lps_filepath(dirname, root)
    lpssuminstfile = lps_filepath(dirname, root, "suminst")
    lpssuminstlpsfununfoldfile = lps_filepath(
        dirname, root, "suminst.fununfold")

    logging.info("Translating mCRL2 specification {} to LPS {}".format(
        mcrl2file, lpsfiletmp))
    data = run_command(mcrl2, "mcrl22lps", ["-nf"], mcrl2file, lpsfile)
    data.update(run_command(mcrl2, "lpssuminst", [], lpsfile, lpssuminstfile))
    data.update(run_command(mcrl2, "lpsfununfold", [],
                lpssuminstfile, lpssuminstlpsfununfoldfile))
    data.update(run_command(mcrl2, "lpsrewr", [],
                lpssuminstlpsfununfoldfile, lpsfile))
    logging.info("Successfully finished translating mCRL2 specification.")

    return data


def lps_to_pbes(dirname, dirname2, root, property_name, mcrl2=mcrl2_Path, hint=None):
    lpsfile = lps_filepath(dirname, root)
    mcffile = property_filepath(dirname2, property_name)
    pbesfile = pbes_filepath(dirname, root, property_name)
    lps2pbesdata = {}
    logging.info("Translating property and LPE specification {},{} to PBES {}".format(
        mcffile, lpsfile, pbesfile))
    try:
        print("Trying lps2pbes")
        lps2pbesdata = run_command_2(mcrl2, "lps2pbes", ["-v", "-f"], mcffile, lpsfile, pbesfile, timeout=TIMEOUT,
                                     memlimit=MEMLIMIT)
        logging.info("Successfully generated PBES from property and LPE.")

    except (ToolException, Timeout, OutOfMemory) as e:
        print("This run crashed")
        logging.error(
            "Failed to generated PBES from property and LPE {}".format(e))

    return lps2pbesdata


def pbes_rewr(dirname, dirname2, root, property_name, mcrl2=mcrl2_Path, hint=None):
    pbesfile = pbes_filepath(dirname, root, property_name)
    pbesfiletmp = pbes_filepath(dirname, root, property_name, "tmp")

    logging.info("Rewriting {} with ppg".format(pbesfile))
    try:
        print("Trying pbesrewr")
        data = run_command(mcrl2, "pbesrewr", [
                           "-v", "-pppg"], pbesfile, pbesfiletmp)
        logging.info("Rewriting {} with quantifier-all".format(pbesfile))
        data.update(run_command(mcrl2, "pbesrewr", [
                    "-v", "-pquantifier-all"], pbesfiletmp, pbesfile))
        logging.info("Successfully finished rewriting PBES.")

    except (ToolException, Timeout, OutOfMemory) as e:
        print("This run crashed")
        logging.error(
            "Failed to rewrite PBES {}".format(e))

    return data


def pbes_symmetry(dirname, root, property_name, mcrl2=mcrl2_Path, hint=None):
    mcrl2mercpath = "../../../mcrl2merc/merc/tools/mcrl2/target/release/"
    pbesfile = pbes_filepath(dirname, root, property_name)
    data = {}
    logging.info(
        "Trying to extract symmetry for PBES-SRF {}".format(pbesfile))
    try:
        print("Trying pbessymmetry")
        if hint == "all":
            data = run_command(mcrl2mercpath, "merc-pbes", ["symmetry", "--partition-data-sorts", "--partition-data-updates", "--all-symmetries"],
                               pbesfile, timeout=TIMEOUT,
                               memlimit=MEMLIMIT)
            logging.info("Successfully ran pbessymmetry for all symmetries.")
            print("Time: {}".format(data["totaltime"]))
        elif hint == "first":
            data = run_command(mcrl2mercpath, "merc-pbes", ["symmetry", "--partition-data-sorts", "--partition-data-updates"],
                               pbesfile, timeout=TIMEOUT,
                               memlimit=MEMLIMIT)
            logging.info("Successfully ran pbessymmetry for first symmetry.")
            print("Time: {}".format(data["totaltime"]))
        else:
            logging.info(
                "Skipped pbessymmetry since given symmetries are used.")

    except (ToolException, Timeout, OutOfMemory) as e:
        print("This run crashed")
        logging.error(
            "Failed to run pbessymmetry for PBES {}".format(e))

    return data


def pbes_solve(dirname, root, property_name, mcrl2, hint, symmetry="[0->0]", arg=""):
    pbesfile = pbes_filepath(dirname, root, property_name, arg)
    solving_data = {}
    logging.info("Solving explicitly PBES {}".format(pbesfile))
    try:
        print("Trying pbessolve with {}".format(hint))
        symmetry_argument = "--symmetry={}".format(symmetry)
        gap_path = shutil.which("gap")
        gap_path_argument = "--gap-path={}".format(gap_path)
        solving_data = run_command(mcrl2, "pbessolve", [
            "-v", "-rjittyc", "--long-strategy=0", "--timings", symmetry_argument, gap_path_argument], pbesfile, timeout=TIMEOUT, memlimit=MEMLIMIT)
        logging.info("Successfully solved explicit PBES.")

    except (ToolException, Timeout, OutOfMemory) as e:
        try:
            print("This run crashed")
            solving_data = e.result
        except AttributeError:
            print("No result to save in .yaml")
        logging.error(
            "Failed to generated PBES from property and LPE {}".format(e))

    return solving_data


def pbes_solve_symmetry(dirname, root, property_name, mcrl2, arg, symmetry):
    pbesfile = pbes_filepath(dirname, root, property_name, arg)
    solving_data = {}
    logging.info("Solving with symmetry PBES {}".format(pbesfile))
    try:
        print("Trying pbessolve with symmetry {}".format(symmetry))
        symmetry_function = cycles_to_function_notation(symmetry)
        if symmetry_function == "[]":
            symmetry_argument = "--symmetry=[]"
        else:
            symmetry_argument = "--symmetry={}".format(symmetry_function)
        gap_path = shutil.which("gap")
        gap_path_argument = "--gap-path={}".format(gap_path)
        solving_data = run_command(mcrl2, "pbessolve", ["-v", "-rjittyc", "--long-strategy=0",
                                   "--timings", symmetry_argument, gap_path_argument], pbesfile, timeout=TIMEOUT, memlimit=MEMLIMIT)
        logging.info(
            "Successfully solved explicit PBES with symmetry reduction.")
    except (ToolException, Timeout, OutOfMemory) as e:
        try:
            print("This run crashed")
            solving_data = e.result
        except AttributeError:
            print("No result to save in .yaml")
        logging.error(
            "Failed to do solving with symmetry {}".format(e))
    return solving_data


def main():
    global memorylimit
    models_path = ''
    data = {}

    # Initialize parser
    parser = argparse.ArgumentParser()
    # Adding optional argument
    parser.add_argument("--memory-limit", dest="memory", help="memory limit")
    parser.add_argument("--workflow", dest="workflow",
                        help="\"chosen-first\" (default), \"chosen\" , \"first\" or \"all\" symmetries")
    parser.add_argument("--selection", dest="selection",
                        help="Choose size of model set, \"s\", \"m\" (default) or \"l\"")
    parser.add_argument("folder", help="Folder with models")
    parser.add_argument("yamlfile", help="Yaml file to save data")
    parser.add_argument("loggingfile", help="Logging file", nargs="?")

    # Read arguments from command line
    args = parser.parse_args()
    folder = args.folder
    yamlfile = args.yamlfile
    loggingfile = args.loggingfile

    if args.workflow is None or args.workflow == "first-chosen":
        workflows = WORKFLOWS_FIRST_CHOSEN
    elif args.workflow == "chosen":
        workflows = WORKFLOWS_CHOSEN
    elif args.workflow == "first":
        workflows = WORKFLOWS_FIRST
    elif args.workflow == "all":
        workflows = WORKFLOWS_ALL

    if args.selection is not None:
        selectionoption = args.selection
    else:
        selectionoption = "m"

    if args.memory is not None:
        memorylimit = args.memory
    else:
        memorylimit = 64
    MEMLIMIT = int(memorylimit) * 1024 * 1024
    print(f"Memory limit {MEMLIMIT}")

    # Check folder path
    if args.folder is not None:
        models_path = os.path.abspath(os.path.join(
            os.path.split(__file__)[0], f"{folder}"))
        if os.path.isdir(folder):
            print(f"The folder path is: {folder}")
        else:
            print(f"The path {folder} is not a valid directory.")
        # check logging file
        if args.loggingfile is not None:
            if os.path.exists(loggingfile):
                os.remove(loggingfile)
            logging.basicConfig(filename=loggingfile, level=logging.INFO)
            logging.info(format(mcrl2_Path))
            print(f"The logging file is: {loggingfile}")
    else:
        print("No folder path provided.")

    if selectionoption == "xs":
        models = MODELS_XS
    elif selectionoption == "s":
        models = MODELS_S
    elif selectionoption == "m":
        models = MODELS_M
    elif selectionoption == "l":
        models = MODELS_L
    elif selectionoption == "xl":
        models = MODELS_XL

    for keys in models:
        data[keys] = {}
        input_file = os.path.join(os.path.split(
            __file__)[0], folder, pathlib.Path(models_path), keys)
        path, filename = split_input_filename(input_file)
        logging.info("Path {}".format(path))
        logging.info("Input model {}".format(filename))
        logging.info("Prop path {}".format(models_path))
        logging.info("Input path {}".format(input_file))

        # step 1 linearise
        if (("routing" in filename) or ("alloc" in filename)):
            data[keys]["mcrl22lps"] = mcrl2_to_lps_suminst_fununfold(
                path, filename)
        else:
            data[keys]["mcrl22lps"] = mcrl2_to_lps(path, filename)
        print("--- Model: {}".format(keys))

        folder_prop = os.path.join(os.path.split(
            __file__)[0], 'properties', pathlib.Path(prop_path), keys)
        logging.info(
            "Input path for properties folder: {}".format(folder_prop))
        folderfile = os.fsencode(folder_prop)
        props = {}

        for file in os.listdir(folderfile):
            prop = os.fsdecode(file)
            if prop.endswith(('.mcf')):
                propname = prop.split('.')[0]
                props[propname] = ['.mcf']

        for p in props:
            print("-- Computing with property: {}".format(p))
            data[keys][p] = {}

            for w in workflows:
                hint = w
                data[keys][p][format(hint)] = {}

                # # step 2 LPS2PBES
                data[keys][p][format(hint)]["lps2pbes"] = lps_to_pbes(
                    path, folder_prop, filename, p, mcrl2_Path, hint)

                if p in REWRITEPROPERTIES:
                    data[keys][p][format(hint)]["pbesrewr"] = pbes_rewr(
                        path, folder_prop, filename, p, mcrl2_Path, hint)

                # # step 3 PBESSYMMETRY
                if hint != 'original':
                    if hint == 'first' or hint == 'all':
                        sym_res = pbes_symmetry(
                            path, filename, p, mcrl2_Path, hint)
                        data[keys][p][format(hint)]["pbessymmetry"] = sym_res
                        symmetries = (sym_res or {}).get("symmetries")
                        if not symmetries:
                            continue

                        symmetries = data[keys][p][format(
                            hint)]["pbessymmetry"]["symmetries"]
                        symmetry_cycle = element_with_longest_cycle(symmetries)
                        data[keys][p][format(
                            hint)]["symmetry_used"] = symmetry_cycle
                        symmetry = cycles_to_function_notation(symmetry_cycle)
                    elif hint == "chosen":
                        symmetry_cycle = get_chosen_symmetry(keys, p)
                        data[keys][p][format(
                            hint)]["symmetry_used"] = symmetry_cycle
                        symmetry = cycles_to_function_notation(symmetry_cycle)

                # # step 4 PBESSOLVE
                if hint == "original":
                    data[keys][p][format(hint)]["pbessolve"] = pbes_solve(
                        path, filename, p, mcrl2_Path, hint)
                else:
                    data[keys][p][format(hint)]["pbessolve"] = pbes_solve(
                        path, filename, p, mcrl2_Path, hint, symmetry)

    with open(yamlfile, 'w') as file:
        yaml.safe_dump(data, file, sort_keys=False, default_flow_style=False)


if __name__ == "__main__":
    main()
