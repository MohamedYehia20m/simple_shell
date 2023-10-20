#include "shell.h"

/**
* _strcat - concatenates two strings.
* @dest: pointer to the first address of the destination string.
* @src: pointer to the first address of the source string.
*
* Return: pointer to char
*/
char *_strcat(char *dest, char *src)
{
	int i, destLen = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++, destLen++)
		dest[destLen] = src[i];
	dest[destLen] = '\0';
	return (dest);
}
