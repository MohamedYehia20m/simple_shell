#include "shell.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the first address of the string.
 *
 * Return: length of the given string.
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (strlen);
}
