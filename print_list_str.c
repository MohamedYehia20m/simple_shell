#include "shell.h"

/**
 * print_list_str - prints all elements of a list_t linked list
 * @node: pointer to first node in the list
 *
 * Return: number of elements
*/
size_t print_list_str(const list_t *L_node)
{
	size_t elemCtr = 0;

	while (L_node)
	{
		_puts(L_node->str ? L_node->str : "(nil)");
		_puts("\n");
		node = L_node->next;
		elemCtr++;
	}
	return (elemCtr);
}
