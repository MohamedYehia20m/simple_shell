#include "shell.h"

/**
 * dup_chars - duplicates a string
 * @path: string to duplicate
 * @start: start index
 * @stop: stop index
 *
 * Return: pointer to new string
*/
char *dup_chars(const char *path, int start, int stop)
{
	static char buffer[1024];
	int index, j;

	for (j = 0, index = start; index < stop; index++)
		if (path[index] != ':')
			buffer[j++] = path[index];
	buffer[j] = 0;
	return (buffer);
}
