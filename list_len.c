#include "shell.h"

/**
 * list_len - returns the length of a list
 * @node: pointer to first node
 *
 * Return: length of list
*/
size_t list_len(const list_t *node)
{
	size_t i = 0;

	while (node)
	{
		node = node->next;
		i++;
	}
	return (i);
}
