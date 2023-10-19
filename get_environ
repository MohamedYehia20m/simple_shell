#include "shell.h"

/**
 * get_environ - Gets the value of an environment variable.
 * @info: Structure containing potential arguments.
 * Return: environment variable value
 */

char **get_environ(info_t *info)
{
	if (!info->environ || info->env_changed)
	{
		info->environ = list_to_strings(info->env);
		info->env_changed = 0;
	}
	return (info->environ);
}
