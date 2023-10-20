#include "shell.h"

/**
 * _putserr - prints an input string to stderr
 * @str: the string to be printed
 *
 * Return: void
*/
void _putserr(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putcharerr(str[i]);
		i++;
	}
}
