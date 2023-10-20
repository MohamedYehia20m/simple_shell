#include "shell.h"

/**
 * _memset - fills a block of memory with a constant byte
 * @str: the pointer to the memory area
 * @value: the byte to fill *str with
 * @num: the amount of bytes to be filled
 *
 * Return: (str) a pointer to the memory area
*/
char *_memset(char *str, char value, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; i++)
		str[i] = value;
	return (str);
}
