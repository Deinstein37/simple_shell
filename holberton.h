<<<<<<< HEAD
#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

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
=======
#include "holberton.h"

/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string to check
 * Return: int
 */

unsigned int nbr_spaces(char *s)
{
	int i, cmpt = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]  == ' ')
			cmpt++;
	}

	return (cmpt);
}


/**
  *stringToTokens - split a sentence into multiple words.
  *@str: the string passed as argument.
  *Return: tokens
  */
char **stringToTokens(char *str)
{
int i = 0;
const char separator[] = " ";
int spaces = nbr_spaces(str);
char **tokens = malloc(sizeof(char *) * (spaces + 1));
char *token;

if (!tokens)
{
	fprintf(stderr, "sh: allocation error\n");
	exit(1);
}

token = strtok(str, separator);

while (token != NULL)
{
	tokens[i] = token;
	token = strtok(NULL, separator);
	i++;
}
tokens[i] = NULL;

return (tokens);
}
>>>>>>> 4b0fb9bb885e4bae5744520361b9648d740d0893
