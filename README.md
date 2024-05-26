# LobsterPyGUI 🦞🐍🖥️ 
<img align="left" src="https://quantumchemist.github.io/utils/lpglogo.gif" width="25%" height=auto />

## A graphical user interface for LobsterPy 

A GUI for an easy start with [LobsterPy](https://github.com/JaGeo/LobsterPy) for the people that are not familiar with the Linux terminal (yet). 
Only suitable for Linux/GNU systems!

A GUI to handle LOBSTER input and output with LobsterPy. The purpose of this GUI is to help beginners getting familiar with Linux and the cli. That's why the functionalities are kept very simple on purpose and it's only supposed to be used on a Linux/GNU based machine. 

# How to use LobsterPyGUI?

Simply download the `lobsterpygui` binary and copy it (e.g. in the terminal) to your `$HOME/bin` folder 📂 (don't forget to add your bin folder to your `$PATH` environment variable).

```bash
cp $HOME/Downloads/lobsterpygui $HOME/bin
```
And then you can simply run it in the folder with your LOBSTER calculation where you want to use LobsterPy using a terminal.

```bash
cd /path/to/your/lobster/calc

lobsterpygui
```
# Example 

When you open lobsterpygui in the terminal and e.g. click on `Plot LOBSTER DOS` it will execute the command `lobsterpy plot-dos` in the background using the lobsterpy-internal plotters. It will also print the standard output (std out)  and errors (std err) of any command in the GUI.

[<img align="left" src="https://quantumchemist.github.io/utils/lpg.png" width="100%" height=auto />](https://github.com/QuantumChemist/LobsterPyGUI)
