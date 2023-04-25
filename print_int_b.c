#include "main.h"
#include <stdarg.h>

/**
 * print_int_b - prints an integer converted to binary
 * @args: a va_list of arguments containing an
 * integer
 *
 * Return: the number of printed digits
 */
int print_int_b(va_list args)
{
	unsigned int num = 0;
	int digits = 0, sign = 0;

	sign = va_arg(args, int);
	num = (sign < 0) ? -sign : sign;
	if (sign < 0)
	{
		_putchar('1');
		digits = 1;
	}

	while (num > 0)
	{
		num = num / 2;
		digits++;
	}

	recur_int_b(sign);
	return (digits);
}

/**
 * recur_int_b - prints a binary
 * @num: integer to print
 *
 * Return: void
 */
void recur_int_b(int num)
{
	unsigned int t;

	t = (num < 0) ? -num : num;
	if (t / 2)
		recur_int_b(t / 2);
	_putchar(t % 2 + '0');
}
