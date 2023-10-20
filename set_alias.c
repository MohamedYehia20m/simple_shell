#include "shell.h"

/**
 * set_alias - sets an alias
 * @info: parameter struct
 * @str: the string alias
 *
 * Return: Always 0 on success, 1 on error
*/
int set_alias(info_t *info, char *str)
{
	char *ptr;

	ptr = _strchr(str, '=');
	if (!ptr)
		return (1);
	if (!*++ptr)
		return (unset_alias(info, str));

	unset_alias(info, str);
	return (add_node_end(&(info->alias), str, 0) == NULL);
}
