#include "shell.h"

/**
 * check_non_interactive - checks if shell is non-interactive
 * @argc: arg count
 * @argv: arg vector
 * @info: the parameter & return info struct
 *
 * Return: EXIT_FAILURE || EXIT_SUCCESS
 */
int check_non_interactive(int argc, char **argv, info_t info[])
{
	int file_descriptor = 5;

	if (argc == 2)
	{
		file_descriptor = open(argv[1], O_RDONLY);
		if (file_descriptor == -1)
		{
			if (errno == EACCES)
				exit(PERMISSION_DENIED);
			if (errno == ENOENT)
			{
				print_string(argv[0]);
				print_string(": 0: Can't open ");
				print_string(argv[1]);
				print_char('\n');
				print_char(BUFFER_FLUSH);
				exit(COMMAND_NOT_FOUND);
			}
			return (EXIT_FAILURE);
		}
		info->file_descriptor = file_descriptor;
	}

	return (EXIT_SUCCESS);
}