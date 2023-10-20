#include "shell.h"

/**
 * input_buffer - reads input from stdin
 * @info: pointer to info struct
 * @buffer: pointer to char buffer
 * @len: pointer to length
 * Return: number of bytes read || -1
 */

ssize_t input_buffer(info_t *info, char **buffer, size_t *len)
{
	ssize_t r = 0;
	size_t input_len_p = 0;

	if (!*len)
	{
		free(*buffer);
		*buffer = NULL;
		signal(SIGINT, handle_sigint_signal);
		r = _getline(info, buffer, &input_len_p);
		if (r > 0)
		{
			if ((*buffer)[r - 1] == '\n')
			{
				(*buffer)[r - 1] = '\0'; /* remove trailing newline */
				r--;
			}
			info->line_count_flag = 1;
			remove_comments(*buffer);
			{
				*len = r;
				info->command_buffer = buffer;
			}
		}
	}
	return (r);
}
