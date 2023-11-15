imple Shell Project

This repository contains the implementation of a simple shell in C for a class or project.

## Project Overview

This project aims to create a basic UNIX command line interpreter (shell) following the requirements provided in the class/project specifications.

## Instructions

The project is divided into multiple tasks, each adding specific functionalities to the shell:

### Task 0: Betty Would Be Proud

Ensure the code complies with the Betty style.

### Task 1: Simple Shell 0.1

Write a UNIX command line interpreter:
- Display a prompt and wait for the user to type a command.
- Support single-word command lines.
- Handle errors and 'end of file' condition (Ctrl+D).

### Task 2: Simple Shell 0.2

Extend the shell to handle command lines with arguments.

### Task 3: Simple Shell 0.3

Add support for PATH handling and avoid calling fork if the command doesn’t exist.

### Task 4: Simple Shell 0.4

Implement the exit built-in command to exit the shell.

### Task 5: Simple Shell 1.0

Implement the env built-in command to print the current environment.

## Repository Structure

- `main.c`: Entry point for the shell program.
- `shell.c`: Implementation of shell functionalities.
- `shell.h`: Header file containing function prototypes and necessary includes.
- Other files for each task or additional functionalities.

## Usage

To compile the shell, use the provided compilation command:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o simple_shell

To run the shell:

./simple_shell

Author

	•	Biruk Beriso - GitHub

Notes

This project is part of a class/project assignment and may lack certain functionalities or error handling. Any contributions or enhancements are welcome!

Feel free to clone or fork this repository to explore and improve the shell implementation.
