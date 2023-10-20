#include "shell.h"

/**
 * get_node_index - gets index of node in linked list
 * @head: address of pointer to head node
 * @node: address of node
 *
 * Return: index of node
*/
ssize_t get_node_index(list_t *head, list_t *node)
{
	int i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}
