#include "shell.h"

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: EXIT_FAILURE || EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	info_t info[] = {INFO_INIT};

	not_interactive(argc, argv, info);
	init_env(info);
	exec(info, argv);
	return (EXIT_SUCCESS);
}
