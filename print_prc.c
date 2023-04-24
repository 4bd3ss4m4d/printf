#include "main.h"

/**
 * print_prc - prints %
 * @args: a va_list of arguments containing a single
 * character to be printed
 *
 * Return: the number of characters printed (in this case,
 * always 1)
 */
int print_prc(va_list args)
{
	_putchar('%');

	return (1);
}
