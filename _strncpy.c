#include "shell.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @num: number of characters
 *
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*(src + i) != '\0' && i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
