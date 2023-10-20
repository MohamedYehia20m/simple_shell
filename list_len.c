#include "shell.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list.
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t ctr = 0;
	list_t *l = (list_t *) h;

	while (l != NULL)
	{
		ctr++;
		l = l->next;
	}
	return (ctr);
}
