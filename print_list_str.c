#include "shell.h"

/**
 * print_list_str - prints all elements of a list_t linked list
 * @node: pointer to first node
 *
 * Return: i number of elements
*/
size_t print_list_str(const list_t *node)
{
	size_t i = 0;

	while (node)
	{
		_puts(node->str ? node->str : "(nil)");
		_puts("\n");
		node = node->next;
		i++;
	}
	return (i);
}
