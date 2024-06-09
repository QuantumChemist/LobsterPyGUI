# LobsterPyGUI 🦞🐍🖥️ 
<img align="right" src="https://quantumchemist.github.io/utils/lpglogo.gif" width="25%" height=auto />

## A graphical user interface for LobsterPy 

A GUI for an easy start with [LobsterPy](https://github.com/JaGeo/LobsterPy) for the people that are not familiar with the Linux terminal (yet). 
Only suitable for Linux/GNU systems!

A GUI to handle LOBSTER input and output with LobsterPy. The purpose of this GUI is to help beginners getting familiar with Linux and the cli. That's why the functionalities are kept very simple on purpose and it's only supposed to be used on a Linux/GNU based machine. 

# How to use LobsterPyGUI?

Simply download the `lobsterpygui` binary and copy it to your `Desktop`.

```bash
cp $HOME/Downloads/lobsterpygui $HOME/Desktop
```
And then you can simply run LobsterPyGUI by double-clicking the binary. With `Open...` you can navigate to the directory with your LOBSTER calculation where you want to use LobsterPy.


# Example 

[<img align="center" src="https://quantumchemist.github.io/utils/lpg.png" width="100%" height=auto />](https://github.com/QuantumChemist/LobsterPyGUI)

When you open lobsterpygui, navigate to your calculation run, and e.g. click on `Plot LOBSTER DOS` it will execute the command `lobsterpy plot-dos` in the background using the lobsterpy-internal plotters. It will also print the standard output (std out)  and errors (std err) of any command in the GUI.


# How to cite LOBSTER and LobsterPy?

Please cite [LOBSTER](https://schmeling.ac.rwth-aachen.de/cohp/index.php?menuID=4), [LobsterPy](https://joss.theoj.org/papers/10.21105/joss.06286), [pymatgen](https://github.com/materialsproject/pymatgen), and [ChemEnv](https://doi.org/10.1107/S2052520620007994) properly.

You can find more information on the fundamental functionality of LOBSTER in [*J. Comput. Chem.*](https://doi.org/10.1002/jcc.26353) **2020**, *41*, 1931–1940, and the methodology of the automatic analysis of LobsterPy in [*ChemPlusChem*](https://doi.org/10.1002/cplu.202200123) **2022**, *87*, e202200123.
