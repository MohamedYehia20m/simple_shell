#include "shell.h"

/**
 * print_decimal - prints a decimal
 * @input: the number to be printed
 * @fd: file descriptor
 *
 * Return: number of printed characters
*/
int print_decimal(int input, int fd)
{
	int (*_putchar)(char) = _putchar;
	int i, num = 0;
	unsigned int _abs_, current;

	if (fd == STDERR_FILENO)
		_putchar = _putcharerr;
	if (input < 0)
	{
		_abs_ = -input;
		_putchar('-');
		num++;
	}
	else
		_abs_ = input;
	current = _abs_;
	for (i = 1000000000; i > 1; i /= 10)
	{
		if (_abs_ / i)
		{
			_putchar('0' + current / i);
			num++;
		}
		current %= i;
	}
	_putchar('0' + current);
	num++;

	return (num);
}
