#include "shell.h"

/**
 * detect_command_separator - detects command separator
 * @info: the parameter struct
 * @buf: the buffer
 * @ptr: the pointer
 *
 * Return: 1 if replaced, 0 otherwise
 */
int detect_command_separator(info_t *info, char *buf, size_t *ptr)
{
	size_t j = *ptr;

	if (buf[j] == '|' && buf[j + 1] == '|')
	{
		buf[j] = 0;
		j++;
		info->command_buffer_type = LOGICAL_OR_COMMAND;
	}
	else if (buf[j] == '&' && buf[j + 1] == '&')
	{
		buf[j] = 0;
		j++;
		info->command_buffer_type = LOGICAL_AND_COMMAND;
	}
	else if (buf[j] == ';')
	{
		buf[j] = 0;
		info->command_buffer_type = SEQUENTIAL_COMMAND;
	}
	else
		return (0);
	*ptr = j;
	return (1);
}
