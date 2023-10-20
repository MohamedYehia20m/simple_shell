#include "shell.h"

/**
 * handle_sigint_signal - handles SIGINT
 * @sig_num: signal
 */

void handle_sigint_signal(__attribute__((unused)) int sig_num)
{
	_puts("\n");
	_puts("$ ");
	_putchar(BUFFER_FLUSH);
}
