#include "shell.h"

/**
 * get_input - reads input from stdin
 * @info: pointer to info struct
 * Return: number of bytes read || -1
 */

ssize_t get_input(info_t *info)
{
	static char *input_buf;
	static size_t i, j, len;
	ssize_t read_result = 0;
	char **arg_ptr = &(info->arg), *current_char_ptr;

	_putchar(BUFFER_FLUSH);
	read_result = input_buffer(info, &input_buf, &len);
	if (read_result == -1)
		return (-1);
	if (len)
	{
		j = i;
		current_char_ptr = input_buf + i;
		handle_sep(info, input_buf, &j, i, len);
		while (j < len)
		{
			if (detect_command_separator(info, input_buf, &j))
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
	*arg_ptr = input_buf;
	return (read_result);
}
