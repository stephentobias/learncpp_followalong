# Chapter 5

This chapter is all developed using the Geany IDE for editting and Make on the CLI for building. 
This process is experimentation for creating a workflow that uses Make so I can learn it better.


## How to build

Within the lesson folder the main code is housed in the `src` directory and the makefile is housed in the respective target folder (e.g. the release build makefile is in `geany-release`).
Here are the instructions to build the project: 
1. In the respective lesson, navigate to the target directory:\
	`$ cd geany-(debug | release)`
2. Build the project with `make`:\
	`$ make all`
