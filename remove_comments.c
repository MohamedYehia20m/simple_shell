#include "shell.h"

/**
 * remove_comments - removes comments from a string
 * @buf: string
 *
 * Return: void
*/
void remove_comments(char *buf)
{
	int i;

	for (i = 0; buf[i] != '\0'; i++)
		if (buf[i] == '#' && (!i || buf[i - 1] == ' '))
		{
			buf[i] = '\0';
			break;
		}
}
