#include "shell.h"

/**
 * detect_command_separator - detects command separator
 * @info: the parameter struct
 * @buffer: the buffer
 * @ptr: the pointer
 *
 * Return: 1 if replaced, 0 otherwise
 */
int detect_command_separator(info_t *info, char *buffer, size_t *ptr)
{
	size_t j = *ptr;

	if (buffer[j] == '|' && buffer[j + 1] == '|')
	{
		buffer[j] = 0;
		j++;
		info->command_buffer_type = LOGICAL_OR_COMMAND;
	}
	else if (buffer[j] == '&' && buffer[j + 1] == '&')
	{
		buffer[j] = 0;
		j++;
		info->command_buffer_type = LOGICAL_AND_COMMAND;
	}
	else if (buffer[j] == ';')
	{
		buffer[j] = 0;
		info->command_buffer_type = SEQUENTIAL_COMMAND;
	}
	else
		return (0);
	*ptr = j;
	return (1);
}
