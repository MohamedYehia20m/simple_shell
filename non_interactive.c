#include "shell.h"

/**
 * not_interactive - checks if the shell is non-interactive
 * @argc: argument count
 * @argv: argument vector
 * @info: info struct
 *
 * Return: EXIT_FAILURE Code
 *		OR EXIT_SUCCESS Code
 */
int not_interactive(int argc, char **argv, info_t info[])
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
				_putserr(argv[0]);
				_putserr(": 0: Can't open ");
				_putserr(argv[1]);
				_putcharerr('\n');
				_putcharerr(BUFFER_FLUSH);
				exit(COMMAND_NOT_FOUND);
			}
			return (EXIT_FAILURE);
		}
		info->file_descriptor = file_descriptor;
	}

	return (EXIT_SUCCESS);
}
