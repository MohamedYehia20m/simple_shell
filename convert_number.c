#include "shell.h"

/**
 * convert_number - converts a number to a string
 * @num: the number to be converted
 * @base: the base of the number
 * @flags: flags
 *
 * Return: string
*/
char *convert_number(long int num, int base, int flags)
{
	static char *arr;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long number = num;

	if (!(flags & CONVERT_UNSIGNED) && num < 0)
	{
		number = -num;
		sign = '-';

	}
	arr = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do	{
		*--ptr = arr[number % base];
		number /= base;
	} while (number != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
