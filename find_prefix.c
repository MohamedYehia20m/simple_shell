#include "shell.h"

/**
 * find_prefix - finds a prefix in a string
 * @haystack: the string
 * @prefix: the prefix
 *
 * Return: A pointer to the prefix
 */

char *find_prefix(const char *haystack, const char *prefix)
{
	while (*prefix)
	{
		if (*prefix++ != *haystack++)
			return (NULL);
	}
	return ((char *)haystack);
}
