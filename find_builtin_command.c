#include "shell.h"

/**
 * find_builtin_command - finds a builtin command
 * @info: the parameter & return info struct
 * Return: builtin_ret
 */

int find_builtin_command(info_t *info)
{
	int index, builtin_ret = -1;
	builtin_table builtin_list[] = {
		{"exit", shell_exit},
		{"env", shell_env},
		{"setenv", shell_setenv},
		{"unsetenv", shell_unsetenv},
		{"cd", shell_cd},
		{"alias", shell_alias},
		{NULL, NULL}};

	for (index = 0; builtin_list[index].type; index++)
		if (_strcmp(info->argv[0], builtin_list[index].type) == 0)
		{
			info->line_count++;
			builtin_ret = builtin_list[index].func(info);
			break;
		}
	return (builtin_ret);
}
