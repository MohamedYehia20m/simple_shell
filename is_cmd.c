#include "shell.h"

/**
 * is_cmd - function to check if a file is a command
 * @info: pointer to info_t struct
 * @path: path to check
 *
 * Return: 0 || 1
*/
int is_command(info_t *info, char *path)
{
	struct stat st;

	(void)info;

	if (!path || stat(path, &st))
		return (0);

	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}
