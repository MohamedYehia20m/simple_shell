#include "shell.h"

/**
 * print_alias - prints an alias string
 * @P_node: the alias node pointer
 *
 * Return: 0 OR 1
*/
int print_alias(list_t *P_node)
{
	char *L_ptr = NULL, *m = NULL;

	if (P_node)
	{
		L_ptr = _strchr(P_node->str, '=');
		for (m = P_node->str; m <= L_ptr; m++)
			_putchar(*m);
		_putchar('\'');
		_puts(L_ptr + 1);
		_puts("'\n");
		return (0);
	}
	return (1);
}
