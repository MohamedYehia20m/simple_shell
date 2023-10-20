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
char *_strdup(char *str)
{
	int length = 0, i;
	char *copy_str;

	if (str == NULL)
		return (NULL);
	/* string length calculation */
	while (str[length] != '\0')
		length++;
	copy_str = malloc(sizeof(char) * length + 1);
	if (copy_str == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		copy_str[i] = str[i];
	return (copy_str);
}
