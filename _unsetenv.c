#include "shell.h"

/**
 * _unsetenv - unset an environment variable
 * @info: Structure containing potential arguments.
 * @var: the string env var property
 *
 * Return: 0
 *	OR value of env_changed
 */
int _unsetenv(info_t *info, char *var)
{
	list_t *node = info->env;
	size_t i = 0;
	char *ptr;

	if (!var || !node)
		return (0);
	do {
		ptr = find_prefix(node->str, var);
		if (ptr && *ptr == '=')
		{
			info->env_changed = delete_node_at_index(&(info->env), i);
			i = 0;
			node = info->env;
			continue;
		}
		node = node->next;
		i++;
	} while (node);
	return (info->env_changed);
}
