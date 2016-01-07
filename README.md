# Project-Euler
## A repo for Project Euler solutions

To have some small problems to solve I'll be working through a few of the problems on the Project Euler website: https://projecteuler.net/

I'll be working through these in C, trying to get some good testing and commenting practices happening. At this point the first goal is to have a well-implemented first 10 problem solutions.

## Make
There is a makefile which has separate compilation targets. There is a build program set of rules and a build test program set of rules. The following make commands are most used: 

* 'make' compiles bin\project_euler.exe
* 'make test' compiles test\bin\test.exe
* 'make clean' cleans the main project
* 'make test_clean' cleans the test project 
