#include "shell.h"

/**
 * find_builtin_command - finds a builtin command
 * @info: the parameter & return info struct
 *
 * Return: builtin_ret
 */
int find_builtin_command(info_t *info)
{
	int index, builtin_ret_val = -1;
	builtin_t builtin_list[] = {
		{"exit", shell_exit},
		{"env", shell_env},
		{"setenv", shell_setenv},
		{"unsetenv", shell_unsetenv},
		{"cd", shell_cd},
		{"alias", shell_alias},
		{NULL, NULL}
	};

	for (index = 0; builtin_list[index].cmd; index++)
		if (_strcmp(info->argv[0], builtin_list[index].cmd) == 0)
		{
			info->line_count++;
			builtin_ret_val = builtin_list[index].func(info);
			break;
		}
	return (builtin_ret_val);
}
