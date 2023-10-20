#include "shell.h"

/**
* _strcmp - compares two strings.
* @s1: pointer to the first address of the first string.
* @s2: pointer to the first address of the second string.
*
* Return: 0 if they are equal, +ve if s1 > s2 or -ve if s2 > s1.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
		if (s1[i++] == '\0')
			break;
	return (s1[i] - s2[i]);
}
