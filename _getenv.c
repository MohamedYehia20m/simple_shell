#include "shell.h"

/**
 * _getenv - Gets the value of an environment variable.
 * @info: Structure containing potential arguments.
 * @name: Name of the environment variable.
 *
 * Return: environment variable value
 */
char *_getenv(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *ptr;

	do {
		ptr = find_prefix(node->str, name);
		if (ptr && *ptr)
			return (ptr);
		node = node->next;
	} while (node);
	return (NULL);
}
