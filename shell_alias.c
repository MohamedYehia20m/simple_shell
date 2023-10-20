#include "shell.h"

/**
 * shell_alias - sets an alias
 * @info: struct info
 *
 * Return: Always 0
 */
int shell_alias(info_t *info)
{
	int i = 0;
	char *ptr = NULL;
	list_t *node = NULL;

	if (info->argc == 1)
	{
		node = info->alias;
		while (node)
		{
			print_alias(node);
			node = node->next;
		}
		return (0);
	}
	for (i = 1; info->argv[i]; i++)
	{
		ptr = _strchr(info->argv[i], '=');
		ptr ? set_alias(info, info->argv[i]) : print_alias(
				node_starts_with(info->alias, info->argv[i], '=')
				);
	}
	return (0);
}
