#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @str: the string
 *
 * Return: the length
*/
int _strlen(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (*str++)
		i++;
	return (i);
}
