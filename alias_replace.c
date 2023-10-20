#include "shell.h"

/**
 * alias_replace - replaces alias
 * @info: struct info
 *
 * Return: 1 if replaced
 *		0 otherwise
 */
int alias_replace(info_t *info)
{
	int ctr = 0;
	list_t *L_node;
	char *ptr;

	do {
		L_node = node_starts_with(info->alias, info->argv[0], '=');
		if (!L_node)
			return (0);
		free(info->argv[0]);
		ptr = _strchr(L_node->str, '=');
		if (!ptr)
			return (0);
		ptr = _strdup(ptr + 1);
		if (!ptr)
			return (0);
		info->argv[0] = ptr;
		ctr++;
	} while (ctr < 10);
	return (1);
}
