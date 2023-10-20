#include "shell.h"

/**
 * init_env - Populates the environment linked list.
 * @info: Structure containing potential arguments.
 * Return: Always 0.
 */

int init_env(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	return (0);
}
