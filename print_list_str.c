#include "shell.h"

/**
 * print_list_str - prints all elements of a list_t linked list
 * @P_node: pointer to first node in the list
 *
 * Return: number of elements
*/
size_t print_list_str(const list_t *P_node)
{
	size_t elemCtr = 0;

	while (P_node)
	{
		_puts(P_node->str ? P_node->str : "(nil)");
		_puts("\n");
		P_node = P_node->next;
		elemCtr++;
	}
	return (elemCtr);
}
