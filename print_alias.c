#include "shell.h"

/**
 * print_alias - prints an alias string
 * @node: the alias node
 *
 * Return: Always 0
*/
int print_alias(list_t *node)
{
	char *ptr = NULL, *a = NULL;

	if (node)
	{
		ptr = _strchr(node->str, '=');
		for (a = node->str; a <= ptr; a++)
			_putchar(*a);
		_putchar('\'');
		_puts(ptr + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}
