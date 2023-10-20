#include "shell.h"

/**
 * string_free - frees a string of strings
 * @ptr: list of strings
 *
 * Return: void
*/
void string_free(char **ptr)
{
	char **list = ptr;

	if (!ptr)
		return;
	while (*ptr)
		free(*ptr++);
	free(list);
}
