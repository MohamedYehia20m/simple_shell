#include "shell.h"

/**
 * list_to_strings - returns an array of strings of the list->str
 * @head: pointer to first node
 *
 * Return: array of strings
*/
char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **str_arr;
	char *str;

	if (!head || !i)
		return (NULL);
	str_arr = malloc(sizeof(char *) * (i + 1));
	if (!str_arr)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(str_arr[j]);
			free(str_arr);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		str_arr[i] = str;
	}
	str_arr[i] = NULL;
	return (str_arr);
}
