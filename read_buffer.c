#include "shell.h"

/**
 * read_buffer - reads input from stdin
 * @info: pointer to info struct
 * @read_buffer: pointer to char buffer
 * @read_pos: pointer to length
 * Return: number of bytes read || -1
 */

ssize_t read_buffer(info_t *info, char *read_buffer, size_t *read_pos)
{
	ssize_t read_result = 0;

	if (*read_pos)	
		return (0);		
	read_result = read(info->file_descriptor, read_buffer, READ_BUFFER_SIZE);			
	if (read_result >= 0)			
		*read_pos = read_result;			
	return (read_result);
}
