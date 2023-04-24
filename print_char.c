#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a single character
 * @args: a va_list of arguments containing a single
 * character to be printed
 *
 * Return: the number of characters printed (in this case,
 * always 1)
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
