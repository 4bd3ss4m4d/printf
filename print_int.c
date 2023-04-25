#include "main.h"

/**
 * print_int - prints an integer
 * @args: a va_list of arguments containing an
 * integer to be printed
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int len = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;

	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
		n = m;
		len += 1;
	}

	while (n > 9)
	{
		n = n / 10;
		len++;
	}

	recur_int(m);
	return (len);
}

/**
 * recur_int - recursively prints an integer
 * @num: integer to print
 *
 * Return: void
 */
void recur_int(int num)
{
	unsigned int t;

	t = num;
	if (t / 10)
		recur_int(t / 10);
	_putchar(t % 10 + '0');
}
