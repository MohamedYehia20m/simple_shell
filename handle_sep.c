#include "shell.h"

/**
 * handle_sep - handles command separator
 * @info: the parameter struct
 * @buf: the buffer
 * @ptr: the pointer
 * @i: the index
 * @len: the length
 *
 * Return: void
 */
void handle_sep(info_t *info, char *buffer, size_t *ptr, size_t i, size_t len)
{
	size_t j = *ptr;

	if (info->command_buffer_type == LOGICAL_AND_COMMAND)
	{
		if (info->status)
		{
			buffer[i] = 0;
			j = len;
		}
	}
	if (info->command_buffer_type == LOGICAL_OR_COMMAND)
	{
		if (!info->status)
		{
			buffer[i] = 0;
			j = len;
		}
	}
	*ptr = j;
}
