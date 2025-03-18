# Chapter 5

This chapter is all developed using the Geany IDE for editting and Make on the CLI for building. This process is experimentation for creating a workflow that uses Make so I can learn it better.

Within each lesson folder, the source files will be in `src` directories and the makefile will be in the respective target folder (e.g. the release build makefile is in `geany-release`). The home folder of each lesson also has a template makefile for each build target. This makes it easier for me to keep track of the makefile for each build target without having to open it each time. If I need to edit the makefile, I edit the template then copy it to the respective directory then rename it to `makefile`. 

For now, the object files and the final binaries are created in one single folder but this might change. I want to try to have the make file create new directories if they don't exist but I will need to dedicate time separately to learning how to do that.

## How to Build
Here are the instructions to build the project: 
1. In the respective lesson, navigate to the target directory:\
	`$ cd geany-(debug | release)`
2. Build the project with `make`:\
	`$ make all`

The build files can be cleaned up by running `$ make clean`
