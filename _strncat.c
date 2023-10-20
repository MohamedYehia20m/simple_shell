#include "shell.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j != n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j != n)
		*(dest + i) = '\0';
	return (dest);
}
