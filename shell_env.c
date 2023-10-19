#include "shell.h"

/**
 * shell_env - Prints the current environment.
 * @info: Structure containing potential arguments.
 * Return: Always 0.
 */

int shell_env(info_t *info)
{
	print_list_str(info->env);
	return (0);
}
