#include "shell.h"

/**
 * _setenv - Initialize a new environment variable.
 * @info: Structure containing potential arguments.
 * @var: string enviroment variable property
 * @value: string enviroment variable value
 *
 * Return: 0 on success, 1 if malloc fails
 */
int _setenv(info_t *info, char *var, char *value)
{
	char *buffer = NULL;
	list_t *node;
	char *ptr;

	if (!var || !value)
		return (0);
	buffer = malloc(_strlen(var) + _strlen(value) + 2);
	if (!buffer)
		return (1);

	_strcpy(buffer, var);
	_strcat(buffer, "=");
	_strcat(buffer, value);
	node = info->env;
	do {
		ptr = find_prefix(node->str, var);
		if (ptr && *ptr == '=')
		{
			free(node->str);
			node->str = buffer;
			info->env_changed = 1;
			return (0);
		}
		node = node->next;
	} while (node);
	add_node_end(&(info->env), buffer, 0);
	free(buffer);
	info->env_changed = 1;
	return (0);
}
