# Simple_shell
#### In this repository you will find our own version of a shell written in C; it was created for learning purposes at Holberton School.
This Shell was created on ubuntu 14.04 and compiled with gcc 4.8.4
### Description.
##### The shell is command interpreter in and operating system such as Unix or GNU/Linux, it is a program that excutes other prorgrams.
### Installation!
```
  $ git clone https://github.com/AdrianVides56/simple_shell.git
  $ cd simple_shell
  $ gcc *.c -o rash
  $ ./rash
  ```
---
### Flowchart:
![Flow_Chart](https://lucid.app/publicSegments/view/fc026936-dc50-4bf8-b320-afba711b3867/image.png)
---
### Usage
You can use it two ways:
#### Interactive mode:
```
  Your@Terminal$ ./rash
  RASH@SHELL$ ls
  RASH@SHELL$
  AUTHORS  README.md  errors.c  functions.c  main_functions.c  main_shell.c  man_1_simple_shell  rash  shell.h
  RASH@SHELL$ exit
  Your@Terminal$ 
  ```
#### Non interactive mode:
```
  Your@Terminal$ echo "/bin/ls" | ./rash
  RASH@SHELL$ AUTHORS  README.md  errors.c  functions.c  main_functions.c  main_shell.c  man_1_simple_shell  rash  shell.h
  RASH@SHELL$
  Your@Terminal$
```  
---
### Files
- [README.md] :
    - Readme file for simple_shell project.
- [main_shell.c] :
    - Entry point for the program.
- [functions.c] :
    - Extra functions used in the program.
    - _strcpy
    - _strlen
    - _strcat
- [main_functions.c] :
    - Main functions:
    - _getline
    - _strstr
    - _execve
- [shell.h] :
    - Header file containing libraries, prototypes and macros.
- [errors.c] :
    - File to handle errors.
- [AUTHORS] :
    - File that contains authors of the projects
- [man_simple_shell] :
    - man page of rash shel
---
### List of useful commands
- ls - list files int the current working diectory
- pwd - displays the path of the current working directory
- cat - displays the content of a file (cat file_name)
---
### Authors
- Roberth Rondon
- Adrian Vides



   [README.md]: <https://github.com/AdrianVides56/simple_shell/blob/master/README.md>
   [main_shell.c]: <https://github.com/AdrianVides56/simple_shell/blob/master/main_shell.c>
   [functions.c]: <https://github.com/AdrianVides56/simple_shell/blob/master/functions.c>
   [main_functions.c]: <https://github.com/AdrianVides56/simple_shell/blob/master/main_functions.c>
   [shell.h]: <https://github.com/AdrianVides56/simple_shell/blob/master/shell.h>
   [errors.c]: <https://github.com/AdrianVides56/simple_shell/blob/master/errors.c>
   [AUTHORS]: <https://github.com/AdrianVides56/simple_shell/blob/master/AUTHORS>
   [man_simple_shell]: <https://github.com/AdrianVides56/simple_shell/blob/master/man_1_simple_shell>
