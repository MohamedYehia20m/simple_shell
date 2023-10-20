#include "shell.h"

/**
 * _strchr - locates a character in a string
 * @str: string to search
 * @c: character to search for
 *
 * Return: A pointer to the char
*/
char *_strchr(char *str, char c)
{
	do {
		if (*str == c)
			return (str);
	} while (*str++ != '\0');

	return (NULL);
}
