
Lukas Licon, llicon 
Winter 2023 PA#5
CSE 101
02/22/2023
README.md

The purpose of this assignment is to create a calculator for performing matrix operations that exploits the (expected) sparseness of its matrix operands.]

Program USAGE
#USAGE: ./Shuffle <file.txt><number>

--Shuffle.cpp--
this is the main program for this project
this program takes 2 arguments, one being an input file and another being a number.
this file implements all functions written out for use in List.cpp
Shuffle.cpp uses a LIST ADT to perform shuffling operations. 

--List.cpp--
implementation of LIST ADT functions that will be used in Shuffle.cpp for access, manipulation, construction, and destruction to perform shuffling operations.
this file contains all the implementation of the function delcarations defined in List.h
this file also contains the structures such as Node and List.

--List.h--
this is a header file that contains all the function declarations for List.cpp
the compiler uses the information in the header files to declare what functions and structures are available to the programmer and how to use them.

--ListTest.c--
this file is to be used as a test client. I created my own tests to test all LIST ADT operations involved in List.h and implemented in List.cpp
this file outputs to terminal every other file that outputs, outputs to a file.

--Makefile--
the Makefile contains a list of rules that tells the system what commands need/want to be executed.
the Makefile is created so that a program can compile due to the executables.

--README--
table of contents that explains what each file contains.
