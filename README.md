# Matrix Operations Calculator - CSE 101 PA#5 (Winter 2023)

### Author: Lukas Licon  
### Date: 02/22/2023  
### Course: CSE 101 - Winter 2023

## Project Overview

The purpose of this project is to implement a calculator that performs matrix operations, optimized for sparse matrices. The program is designed to exploit the expected sparseness of matrix operands, making it more efficient in terms of memory usage and computational performance.

The main functionality is built around a custom implementation of a List Abstract Data Type (ADT), which is used to manipulate matrix data and perform shuffling operations. The project includes both the implementation and testing of the List ADT, along with the core program that performs the matrix operations.

## Program Usage

### Command Line Usage:
```bash
./Shuffle <file.txt> <number>
```
- `<file.txt>`: Input file containing matrix data.
- `<number>`: An additional argument used for shuffling operations.

## File Descriptions

### 1. **Shuffle.cpp**
   - **Description**: The main program for the project. It takes two arguments: an input file and a number. The program reads matrix data from the input file and performs shuffling operations using a List ADT.
   - **Functionality**: Implements all required matrix operations and manipulations by utilizing the List ADT. Handles input/output and orchestrates the overall workflow of the program.

### 2. **List.cpp**
   - **Description**: Implements the List ADT functions that are used in `Shuffle.cpp` to perform operations on matrices. This file contains the core logic for accessing, manipulating, constructing, and destructing the List data structure.
   - **Structures**: Defines important structures such as `Node` and `List` that are essential for the List ADT operations.

### 3. **List.h**
   - **Description**: Header file that contains all the function declarations for the List ADT. It defines the interface for `List.cpp`, providing function prototypes and structure definitions that are used across the project.

### 4. **ListTest.c**
   - **Description**: A test client designed to validate the functionality of the List ADT. It includes custom test cases to ensure that all List operations defined in `List.h` and implemented in `List.cpp` work as expected.
   - **Output**: The results of the tests are output to the terminal, ensuring the correctness of the List ADT operations.

### 5. **Makefile**
   - **Description**: The `Makefile` automates the build process by defining a list of rules for compiling the program. It ensures that all source files are compiled correctly into an executable. It includes targets for compiling, cleaning, and running the program.

### 6. **README.md**
   - **Description**: This file (README.md) provides a detailed explanation of the project, including file descriptions, usage instructions, and other important information. It serves as a guide to help users and developers understand the structure and functionality of the project.

## Compilation

To compile the project, use the following command:
```bash
make
```
This will compile the source files and generate the `Shuffle` executable.

## Running Tests

To run the tests for the List ADT, execute the `ListTest` program:
```bash
./ListTest
```
This will run all the test cases and output the results to the terminal.

## Additional Notes

- The project exploits the sparseness of matrices, optimizing memory usage and performance.
- The code has been structured to ensure modularity and reusability, with the List ADT serving as the core data structure for matrix operations.
- The program's logic has been thoroughly tested using custom test cases to ensure correctness.

## License

This project is developed for educational purposes as part of the CSE 101 course at UCSC. All rights reserved.
