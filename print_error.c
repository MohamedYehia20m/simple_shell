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
	print_string(info->file_name);
	print_string(": ");
	print_decimal(info->line_count, STDERR_FILENO);
	print_string(": ");
	print_string(info->argv[0]);
	print_string(": ");
	print_string(estr);
}
