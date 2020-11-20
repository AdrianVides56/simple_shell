#ifndef SHELL_H
#define SHELL_H

#define DELIM " ,!¡¿?\'\"\n\t"
#define GREEN_T "\x1b[32m"
#define RESET_COLOR "\x1b[37m"

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

char *_strcat(char *dest, char *src);

#endif