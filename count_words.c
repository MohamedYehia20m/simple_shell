#include "shell.h"

/**
 * count_words - counts the number of words in a string
 * @str: string to count
 * @delim: delimiter
 *
 * Return: number of words
 */
int count_words(char *str, char *delim)
{
	int i, words_count = 0;

	if (str == NULL || str[0] == 0)
		return (0);

	if (delim == NULL)
		delim = " ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_delim(str[i], delim) &&
			(is_delim(str[i + 1], delim) || !str[i + 1]))
			words_count++;
	}

	return (words_count);
}
