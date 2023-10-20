#include "shell.h"

/**
 * print_char - prints an input string
 * @c: The character to print
 *
 * Return: On success 1.
*/
int print_char(char c)
{
	static int i;
	static char buffer[WRITE_BUFFER_SIZE];

	if (c == BUFFER_FLUSH || i >= WRITE_BUFFER_SIZE)
	{
		write(2, buffer, i);
		i = 0;
	}
	if (c != BUFFER_FLUSH)
		buffer[i++] = c;
	return (1);
}
