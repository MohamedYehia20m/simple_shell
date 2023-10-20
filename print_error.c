#include "shell.h"

/**
 * print_error - prints an error
 * @info: the parameter & return info struct
 * @estr: string containing specified error type
 *
 * Return: 0 || converted number
*/
void print_error(info_t *info, char *estr)
{
	_putserr(info->file_name);
	_putserr(": ");
	print_decimal(info->line_count, STDERR_FILENO);
	_putserr(": ");
	_putserr(info->argv[0]);
	_putserr(": ");
	_putserr(estr);
}
