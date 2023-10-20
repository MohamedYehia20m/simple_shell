#include "shell.h"

/**
 * search_path - searches for a command in a list of paths
 * @info: pointer to info_t struct
 * @path_list: list of paths
 * @command: command to search
 *
 * Return: command || new_path || NULL on error
*/
char *search_path(info_t *info, char *path_list, char *command)
{
	int index = 0, start_pos = 0;
	char *new_path;

	if (!path_list)
		return (NULL);
	if ((_strlen(command) > 2) && find_prefix(command, "./"))
	{
		if (is_command(info, command))
			return (command);
	}
	while (1)
	{
		if (!path_list[index] || path_list[index] == ':')
		{
			new_path = dup_chars(path_list, start_pos, index);
			if (!*new_path)
				_strcat(new_path, command);
			else
			{
				_strcat(new_path, "/");
				_strcat(new_path, command);
			}
			if (is_command(info, new_path))
				return (new_path);
			if (!path_list[index])
				break;
			start_pos = index;
		}
		index++;
	}
	return (NULL);
}
