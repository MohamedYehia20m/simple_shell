#include "shell.h"

/**
 * exec - executes a command
 * @info: the parameter & return info struct
 * @argv: the command
 *
 * Return: builtin_ret
*/
int exec(info_t *info, char **argv)
{
	ssize_t r = 0;
	int builtin_ret = 0;

	while (r != -1 && builtin_ret != -2)
	{
		reset_info(info);
		if (interactive(info))
			_puts("$ ");
		print_char(BUFFER_FLUSH);
		r = get_input(info);
		if (r != -1)
		{
			initialize_info(info, argv);
			builtin_ret = find_builtin_command(info);
			if (builtin_ret == -1)
				find_command(info);
		}
		else if (interactive(info))
			_putchar('\n');
		deallocate_info(info, 0);
	}
	deallocate_info(info, 1);
	if (!interactive(info) && info->status)
		exit(info->status);
	if (builtin_ret == -2)
	{
		if (info->error_num == -1)
			exit(info->status);
		exit(info->error_num);
	}
	return (builtin_ret);
}
