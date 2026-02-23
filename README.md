# pbes-symmetry-experiments 
Repository containing the examples and scripts used for the experiments in the paper ``Control flow-based Symmetry Reduction for Parametrised Boolean Equation Systems''.

This repository consists of:
- The source code for mCRL2 (used for pbessolve)
- The source code for MERC (used for pbes-merc (symmetry detection)) 
- A benchmark set of models, properties and symmetries 
- Some run scripts to obtain the results and generate tables

An artefact in the form of a VM image (OVA) is available in which the 
relevant tools have been set up. (The link to this artefact will be provided shortly)


## Installation
The experiments can be recreated in two ways

### 1) Artefact VM image (recommended)
To artefact VM image is available at (link to be added). Once downloaded , the VM can be run in a dedicated VM tool like [VirtualBox](https://www.virtualbox.org/).

### 2) Local tool installation
To run the experiments locally the following tools have to be installed. 
- mCRL2: the folder  `mCRL2` contains the source code for the mCRL2 version used. This can be build using the [build instruction](https://mcrl2.org/web/developer_manual/build_instructions/instructions.html) on the mCRL2 web page.  
- MERC: the folder `merc` contains the source code of the MERC tool, that is used for symmetry detection. This can be build using the [build instruction](https://github.com/MERCorg/merc) on the designated repository. 
- GAP: This can be installed following the installation steps on the DAP-webpage(https://www.gap-system.org/install/). Note: our tool was developed using GAP version 4.11.1. This is the version that is installed with ```apt-get install gap``` on Ubuntu 22.04. 
- Python: when running the scripts it is assumed that Python can be called using ``python3``.

When the tools are installed, the paths variables `mcrl2_path` and `mcrl2_merc_path` should be specified in the ```run.py``` script.


## Usage
In the `experiments` folder the bash script ```run``` can be used to carry out the benchmarks. This script is used as follows. 

```
./run  [-h] n [first-chosen|first|chosen|all] [xs|s|m|l|xl]

    -h                 : show this help message and exit
    n                  : number of times the experiments are run
    [first|chosen|all] : option to use \"first-chosen\" (default), 
                        \"first\", \"chosen\" or \"all\" symmetries
    [xs|s|m|l|xl]      : option to select size of model set (default is s)
```

A \"kick-the-tires\" can be performed running ``./run 1 first-chosen``

An example of a medium test set is ``./run 3 first-chosen m``

To obtain the results shown in the paper we ran ``./run 5 first-chosen l``

After a run is done, the results will be stored in files `result-n.yml`, where `n` stands for the run number. These can be provided as input to the script `table.py`. This prints a table of the results, produces a latex file `table.tex` (which represents the table in the paper) and a csv file `table.csv`. To print the table for the ``kick-the-tires'' run, execute ``python3 table.py result-1.yml``. For cases with multiple runs, execute``python3 table.py result-1.yml ... result-n.yml``.

The YAML files for the runs used for the table in the paper are provided in the `resulst` folder. Obtain the numbers from the paper, one can run ``python3 table.py results/results-l*``
