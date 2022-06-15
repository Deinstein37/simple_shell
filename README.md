<<<<<<< HEAD
Implementation of sh in C programming language

Overview
Simple Shell is a ALX-Software Engineering Program pair project. The general goal of the project is to write a simple UNIX command interpreter.

Tasks

Mandatory:
README, man, AUTHORS
Write a README
Write a man for your shell.
You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.
Simple shell 0.1
Write a UNIX command line interpreter.
Your Shell should: Display a prompt and wait for the user to type a command. A command line always ends with a new line. The prompt is displayed again each time a command has been executed. The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features. The command lines are made only of one word. No arguments will be passed to programs. If an executable cannot be found, print an error message and display the prompt again. Handle errors. You have to handle the “end of file” condition (Ctrl+D)
You don’t have to: use the PATH implement built-ins handle special characters : ", ', `, , *, &, # be able to move the cursor handle commands with arguments
Simple shell 0.2
Handle command lines with arguments
Simple shell 0.3
Handle the PATH
Simple shell 0.4
Implement the exit built-in, that exits the shell
Usage: exit
You don’t have to handle any argument to the built-in exit
Simple shell 1.0
Implement the env built-in, that prints the current environment
Write a blogpost "What happens when you type ls -l in the shell"

Advanced Tasks
Test suite
Contribute to a test suite for your shell
Simple shell 0.2.1
Write your own strtok function
Simple shell 0.4.1
handle arguments for the built-in exit
Simple shell 0.4.2
Handle Ctrl+C: your shell should not quit when the user inputs ^C
setenv, unsetenv
Implement the setenv and unsetenv builtin commands
cd
Implement the builtin command cd
;
Handle the commands separator ;
alias
Implement the alias builtin command
Comments
Handle comments (#)
help
Implement the help built-in
File as an input
Your shell should take a file as a command line argument

Authors
Onolameh Daniel and Moses Ojo
=======
## SIMPLE SHELL

DESCRIPTION

This is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh). Additional functions are also included. This program was written entirely in C as a milestone project for Alx-Holberton School.

#Installation
Clone this repository into your working directory. Files should be compiled with GCC and the following flags: -Wall -Wextra -Werror -pedantic -Wno-format.

#Usage
After compilation, the resulting program can run stand-alone, either in interactive or non-interactive mode.

#After compilation, the resulting program can run stand-alone, either in interactive or non-interactive mode.

#Interactive Mode
In interactive mode, simply run the program and wait for the prompt to appear. From there, you can type commands freely, exiting with either the "exit" command or ctrl-D.

#Non-Interactive Mode
In non-interactive mode, echo your desired command and pipe it into the program like this:

echo "ls" | ./shell In non-interactive mode, the program will exit after finishing your desired command(s).

This is the man page which contains all functions and descriptions of all the functions used in this Simple shell project. To access this page, Do:

#AUTHORS
This file contains the details of all the individuals that contributed to this shell project.

#Features
DIsplay a prompt and wait for the user to type a command. A command-line always ends with a new line.
The prompt is displayed again each time a command has been executed.
The command lines are simple, no semicolons, no pipes, no redirections, or any other advanced features.
The command lines are made only of one word.No arguement will be passed to the programs. 5.If an executable is not found the shell prints an error message and displayu the prompt again.

#Credits
Onolameh Daniel and Ojo Moses
>>>>>>> d01bf9235a9c6268b4e12ad20fc3724826cbd778
