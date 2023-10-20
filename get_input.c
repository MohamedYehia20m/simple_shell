#include "shell.h"

/**
 * get_input - reads input from stdin
 * @info: pointer to info struct
 * Return: number of bytes read || -1
 */

ssize_t get_input(info_t *info)
{
	static char *buf;
	static size_t i, j, len;
	ssize_t read_result = 0;
	char **arg_ptr = &(info->arg), *current_char_ptr;

	_putchar(BUFFER_FLUSH);
	read_result = input_buffer(info, &buf, &len);
	if (read_result == -1)
		return (-1);
	if (len)
	{
		j = i;
		current_char_ptr = buf + i;
		handle_sep(info, buf, &j, i, len);
		while (j < len)
		{
			if (detect_command_separator(info, buf, &j))
				break;
			j++;
		}
		i = j + 1;
		if (i >= len)
		{
			i = len = 0;
			info->command_buffer_type = NORMAL_COMMAND;
		}
		*arg_ptr = current_char_ptr;
		return (_strlen(current_char_ptr));
	}
	*arg_ptr = buf;
	return (read_result);
}
