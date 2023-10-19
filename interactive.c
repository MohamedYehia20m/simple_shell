#include "shell.h"

/**
 * interactive - checks if the shell is interactive
 * @info: pointer to info struct
 * Return: 1 || 0
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->file_descriptor <= 2);
}
