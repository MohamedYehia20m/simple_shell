#include "shell.h"

/**
 * string_replace - replaces a string
 * @old_string: the old string
 * @new_string: the new string
 *
 * Return: 1 if replaced
 */
int string_replace(char **old_string, char *new_string)
{
	free(*old_string);
	*old_string = new_string;
	return (1);
}
