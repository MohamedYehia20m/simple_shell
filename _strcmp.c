#include "shell.h"

/**
 * _strcmp - compares two strings
 * @str1: first string
 * @str2: second string
 *
 * Return: 0 if equal, -1 if str1 < str2, 1 if str1 > str2
*/
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	if (*str1 == *str2)
		return (0);
	else
		return (*str1 < *str2 ? -1 : 1);
}
