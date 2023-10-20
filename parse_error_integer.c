#include "shell.h"

/**
 * parse_error_integer - parses an integer
 * @str: the string to be parsed
 *
 * Return: 0 || converted number
*/
int parse_error_integer(char *str)
{
	int i;
	int result = 0;

	if (*str == '+')
		str++;
	for (i = 0;  str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += (str[i] - '0');
			if (result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}
