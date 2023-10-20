#include "shell.h"

/**
 * node_starts_with - finds node with given prefix
 * @node: address of node
 * @prefix: prefix
 * @c: character
 *
 * Return: address of node || NULL
*/
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *ptr = NULL;

	while (node)
	{
		ptr = find_prefix(node->str, prefix);
		if (ptr && ((c == -1) || (*ptr == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}
