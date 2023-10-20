#include "shell.h"

/**
 * _strdup - returns a pointer to a newly allocated space in
 *		memory, which contains a copy of the string
 *		given as a parameter.
 * @str: pointer to the string.
 *
 * Return: NULL if str = NULL
 *	 On success, the _strdup function a pointer to
 *	 the duplicated string.
 *	 NULL if insufficient memory was available
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *result;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	for (length++; length--;)
		result[length] = *--str;
	return (result);
}
