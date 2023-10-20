#include "shell.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @num: number of characters
 *
 * Return: pointer to destination
*/
char *_strncat(char *dest, char *src, int num)
{
	int i, j;
	char *str = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < num)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < num)
		dest[i] = '\0';
	return (str);
}
