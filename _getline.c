#include "shell.h"

/**
 * _getline - reads input from stdin
 * @info: pointer to info struct
 * @line_ptr: pointer to char buffer
 * @line_len: pointer to length
 * Return: number of bytes read || -1
 */

int _getline(info_t *info, char **line_ptr, size_t *line_len)
{
	static char buffer[READ_BUFFER_SIZE];
	static size_t buffer_pos, buffer_len;
	size_t k;
	ssize_t read_result = 0, s = 0;
	char *line = NULL, *new_line = NULL, *c;

	line = *line_ptr;
	if (line && line_len)
		s = *line_len;
	if (buffer_pos == buffer_len)
		buffer_pos = buffer_len = 0;
	read_result = read_buffer(info, buffer, &buffer_len);
	if (read_result == -1 || (read_result == 0 && buffer_len == 0))
		return (-1);
	c = _strchr(buffer + buffer_pos, '\n');
	k = c ? 1 + (unsigned int)(c - buffer) : buffer_len;
	new_line = _realloc(line, s, s ? s + k : k + 1);
	if (!new_line)
		return (line ? free(line), -1 : -1);
	if (s)
		_strncat(new_line, buffer + buffer_pos, k - buffer_pos);
	else
		_strncpy(new_line, buffer + buffer_pos, k - buffer_pos + 1);
	s += k - buffer_pos;
	buffer_pos = k;
	line = new_line;
	if (line_len)
		*line_len = s;
	*line_ptr = line;
	return (s);
}
