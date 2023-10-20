#include "shell.h"

/**
 * _strcat - concatenates two strings
 * @destination: dest string
 * @source: src string
 *
 * Return: pointer to dest
*/
char *_strcat(char *destination, char *source)
{
	char *result = destination;

	while (*destination)
		destination++;

	while (*source)
		*destination++ = *source++;

	*destination = *source;

	return (result);
}
