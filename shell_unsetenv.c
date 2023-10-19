#include "shell.h"

/**
 * shell_unsetenv - Removes an environment variable.
 * @info: Structure containing potential arguments.
 * Return: Always 0.
 */

int shell_unsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		print_string("Too few arguments.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_unsetenv(info, info->argv[i]);
	return (0);
}
