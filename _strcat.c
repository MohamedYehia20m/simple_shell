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
	char *result = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (result);
}
