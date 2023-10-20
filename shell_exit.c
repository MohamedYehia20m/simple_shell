#include "shell.h"

/**
 * shell_exit - exits the shell
 * @info: Structure containing potential arguments. Used to maintain
 *
 * Return: exits with a given exit status
*/
int shell_exit(info_t *info)
{
	int exit_value;

	if (info->argv[1])
	{
		exit_value = parse_error_integer(info->argv[1]);
		if (exit_value == -1)
		{
			info->status = 2;
			print_error(info, "Illegal number: ");
			_putserr(info->argv[1]);
			_putcharerr('\n');
			return (1);
		}
		info->error_num = parse_error_integer(info->argv[1]);
		return (-2);
	}
	info->error_num = -1;
	return (-2);
}
