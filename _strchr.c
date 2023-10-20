#include "shell.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: A pointer to the char
*/

char *_strchr(char *s, char c)
{
	while (*(s++) != '\0')
	{
		if (*(s) == c)
			return (s);
	}
	return ('\0');
}
