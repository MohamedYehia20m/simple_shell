#include "shell.h"

/**
 * split_string - splits a string into words
 * @str: string to split
 * @delimiter: delimiter
 * Return: NULL on error
 */
char **split_string(char *str, char *delim)
{
	int i, j, k, m;
	int words_count = count_words(str, delim);
	char **tokenized_str;

	if (words_count == 0)
		return (NULL);

	if (str == NULL || str[0] == 0)
		return (NULL);

	if (!delim)
		delim = " ";

	tokenized_str = malloc((1 + words_count) * sizeof(char *));
	if (!tokenized_str)
		return (NULL);
	for (i = 0, j = 0; j < words_count; j++)
	{
		while (is_delim(str[i], delim))
			i++;
		k = 0;
		while (!is_delim(str[i + k], delim) && str[i + k])
			k++;
		tokenized_str[j] = malloc((k + 1) * sizeof(char));
		if (!tokenized_str[j])
		{
			for (k = 0; k < j; k++)
				free(tokenized_str[k]);
			free(tokenized_str);
			return (NULL);
		}
		for (m = 0; m < k; m++)
			tokenized_str[j][m] = str[i++];
		tokenized_str[j][m] = 0;
	}
	tokenized_str[j] = NULL;
	return (tokenized_str);
}
