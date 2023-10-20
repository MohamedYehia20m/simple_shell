#include "shell.h"

/**
 * string_replace - replaces a string
 * @old_bf: the old string
 * @new_bf: the new string
 *
 * Return: 1 if replaced
 */
int string_replace(char **old_bf, char *new_bf)
{
	free(*old_bf);
	*old_bf = new_bf;
	return (1);
}
