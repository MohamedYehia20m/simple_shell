#include "shell.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @num: number of characters
 *
 * Return: pointer to destination
*/
char *_strncpy(char *dest, char *src, int num)
{
	int i, j;
	char *str = dest;

	i = 0;
	while (src[i] != '\0' && i < num - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < num)
	{
		j = i;
		while (j < num)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (str);
}
