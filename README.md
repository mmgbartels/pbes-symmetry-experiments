# pbes-symmetry-experiments 
Repository containing the examples and scripts used for the experiments in the paper ``Control flow-based Symmetry Reduction for Parametrised Boolean Equation Systems''.

This repository consists of:
- The source code for mCRL2 (used for pbessolve)
- The source code for MERC (used for pbes-merc (symmetry detection)) 
- A benchmark set of models, properties and symmetries 
- Some run scripts to obtain the results and generate tables

An artefact in the fjkorm of a VM image (OVA) is available in which the 
relevant tools have been set up. (The link to this artefact will be provided shortly)


## Installation
To run the experiments locally the following tools have to be installed. 
- mCRL2: the folder  `mCRL2` contains the source code for the mCRL2 version used. This can be build using the [build instruction](https://mcrl2.org/web/developer_manual/build_instructions/instructions.html) on the mCRL2 web page.  
- MERC: the folder `merc` contains the source code of the MERC tool, that is used for symmetry detection. This can be build using the [build instruction](https://github.com/MERCorg/merc) on the designated repository. 
- GAP: This can be installed following the installation steps on the DAP-webpage(https://www.gap-system.org/install/). Note: our tool was developed using GAP version 4.11.1. This is the version that is installed with ```apt-get install gap``` on Ubuntu 22.04. 

## Usage

