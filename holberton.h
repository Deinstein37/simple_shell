<<<<<<< HEAD
#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL
=======
#ifndef HOLBERTON_H_
#define HOLBERTON_H_
>>>>>>> 9c3cef0722afeed67a39d2ee87e88b6444715565

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _putchar(char c);
void _puts(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

#endif
