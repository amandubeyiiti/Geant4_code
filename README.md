# Geant4 codes explaination
## Codes are written in C++ 

These codes are for running the basic program in Geant4. 
The folder "include" contains all the necessary headers file which has been used in the simulation.
The folder "src" contains all the necessary source file which has been used in this simulation.
The macros folder contains files which can helps us to run the program in Batch mode.

## To run this simulation
In the same folder where you CMakeList.txt file there create a new folder called build by doing this:
mkdir build

Then go to the this build folder: **cd build**
In the same build folder do: **cmake ..**
Then do: **make -jN  **    N = no. of cores of the CPU when you build the Geant4 while installing
Once Make is finished, do :** ./sim **

The Geometry will be visible as we are running it in interactive mode. In the interactive terminal, run the command /run/beamOn [no. of events]  to run the simulation.
