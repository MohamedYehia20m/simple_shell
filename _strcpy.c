#include "shell.h"

/**
 * _strcpy - copies a string
 * @destination: the destination
 * @source: the source
 *
 * Return: pointer to destination
*/

/*char *_strcpy(char *destination, char *source)
{
	int index = 0;

	if (destination == source || source == NULL)
		return (destination);

	while (source[index])
	{
		destination[index] = source[index];
		index++;
	}
	destination[index] = '\0';

	return (destination);
}*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
