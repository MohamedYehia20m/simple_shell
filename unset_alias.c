#include "shell.h"

/**
 * unset_alias - sets an alias
 * @info: parameter struct
 * @str: the string alias
 *
 * Return: Always 0 on success, 1 on error
*/
int unset_alias(info_t *info, char *str)
{
	char *ptr, c;
	int ret;

	ptr = _strchr(str, '=');
	if (!ptr)
		return (1);
	c = *ptr;
	*ptr = 0;
	ret = delete_node_at_index(
					&(info->alias),
					get_node_index(
							info->alias,
							node_starts_with(info->alias, str, -1)
							)
					);
	*ptr = c;
	return (ret);
}
