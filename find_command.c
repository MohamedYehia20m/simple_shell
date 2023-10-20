#include "shell.h"

/**
 * find_command - finds a command in PATH
 * @info: the parameter & return info struct
 */

void find_command(info_t *info)
{
	char *path = NULL;
	int index, k;

	info->path = info->argv[0];
	if (info->line_count_flag == 1)
	{
		info->line_count++;
		info->line_count_flag = 0;
	}
	for (index = 0, k = 0; info->arg[index]; index++)
		if (!is_delim(info->arg[index], " \t\n"))
			k++;
	if (!k)
		return;
	path = search_path(info, _getenv(info, "PATH="), info->argv[0]);
	if (path)
	{
		info->path = path;
		fork_command(info);
	}
	else
	{
		if ((interactive(info) || _getenv(info, "PATH=")
			|| info->argv[0][0] == '/') && is_cmd(info, info->argv[0]))
			fork_command(info);
		else if (*(info->arg) != '\n')
		{
			info->status = COMMAND_NOT_FOUND;
			print_error(info, "not found\n");
		}
	}
}
