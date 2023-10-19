#include "shell.h"

/**
 * shell_setenv - Initialize a new environment variable,
 * @info: Structure containing arguments,
 * Return: Always 0.
 */

int shell_setenv(info_t *info)
{
	if (info->argc != 3)
	{
		print_string("Incorrect number of arguments\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}
