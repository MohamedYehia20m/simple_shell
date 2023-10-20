#include "shell.h"

/**
 * variables_substitute - replaces vars in the tokenized string
 * @info: the parameter struct
 *
 * Return: 0
 */
int variables_substitute(info_t *info)
{
	int i = 0;
	list_t *node;

	for (i = 0; info->argv[i]; i++)
	{
		if (info->argv[i][0] != '$' || !info->argv[i][1])
			continue;

		if (!_strcmp(info->argv[i], "$?"))
		{
			string_replace(&(info->argv[i]),
						   _strdup(convert_number(info->status, 10, 0)));
			continue;
		}
		if (!_strcmp(info->argv[i], "$$"))
		{
			string_replace(&(info->argv[i]),
						   _strdup(convert_number(getpid(), 10, 0)));
			continue;
		}
		node = node_starts_with(info->env, &info->argv[i][1], '=');
		if (node)
		{
			string_replace(&(info->argv[i]),
						   _strdup(_strchr(node->str, '=') + 1));
			continue;
		}
		string_replace(&info->argv[i], _strdup(""));
	}
	return (0);
}
