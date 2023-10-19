#include "shell.h"

/**
 * is_delim - checks if character is a delimiter
 * @c: the char to check
 * @delim: delimiter string to check
 * Return: 1 || 0
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}
