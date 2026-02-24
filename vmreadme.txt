The relevant code for the artefact can be found in "Desktop>pbes-symmetry-experiments".

To run the artefact open the folder "Desktop>pbes-symmetry-experiments>experiments" in a terminal. 

Be aware that the times might differ from those in the paper, because of the setup of the VM.

-------------------------------------------------------------------------------------------------------

A "kick-the-tires" test can be run using the command 

    ./run 1 first-chosen xs

-------------------------------------------------------------------------------------------------------

For other tests the run script is used as follows:

Usage: run [-h] n [first-chosen|first|chosen|all] [xs|s|m|l|xl]

  where:
    -h                 : show this help message and exit
    n                  : number of times the experiments are run
    [first|chosen|all] : option to use "first-chosen" (default),
                        "first", "chosen" or "all" symmetries
    [xs|s|m|l|xl]      : option to select size of model set (default is s)

Some examples that one might run are:

    ./run 5 first-chosen s
    ./run 3 first-chosen m
    ./run 1 first-chosen l

To obtain the numbers found in the paper we ran:

    ./run 5 first-chosen l

Be aware that this might take too much time to run.
We provided the output of these runs in "Desktop>pbes-symmetry-experiments>experiments>results".

-------------------------------------------------------------------------------------------------------

To generate the table the script "Desktop>pbes-symmetry-experiments>experiments>table.py" can be used. 
This pretty prints the results to the terminal, and generates a "table.tex" and "table.csv" file. 
Example usage: 

    python3 table.py results-1.yaml

To obtain the numbers from the paper, run:

    python3 table.py results/*
