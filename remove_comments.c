#include "shell.h"

/**
 * remove_comments - removes comments from a string
 * @buffer: string
 *
 * Return: void
*/
void remove_comments(char *buffer)
{
	int i;

	for (i = 0; buffer[i] != '\0'; i++)
		if (buffer[i] == '#' && (!i || buffer[i - 1] == ' '))
		{
			buffer[i] = '\0';
			break;
		}
}
