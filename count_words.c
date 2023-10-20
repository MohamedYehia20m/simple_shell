#include "shell.h"

/**
 * count_words - counts the number of words in a string
 * @str: string to count
 * @delimiter: delimiter
 *
 * Return: number of words
 */
int count_words(char *str, char *delimiter)
{
	int i, words_count = 0;

	if (str == NULL || str[0] == 0)
		return (0);

	if (delimiter == NULL)
		delimiter = " ";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_delim(str[i], delimiter) &&
			(is_delim(str[i + 1], delimiter) || !str[i + 1]))
			words_count++;
	}

	return (words_count);
}
