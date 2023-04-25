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
	unsigned int x = 0;
	int b = 0, new = 0;

	new = va_arg(args, int);
	x = new;
	if (new < 0)
	{
		_putchar('1');
		new = new * -1;
		x = new;
		b += 1;
	}
	while (x > 0)
	{
		x = x / 2;
		b++;
	}
	recur_int_b(new);
	return (b);
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

	t = num;
	if (t / 2)
		recur_int_b(t / 2);
	_putchar(t % 2 + '0');
}
