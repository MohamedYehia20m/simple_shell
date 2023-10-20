#include "shell.h"

/**
 * print_string - prints an input string
 * @str: the string to be printed
 *
 * Return: void
*/
void print_string(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		print_char(str[i]);
		i++;
	}
}
