#include "main.h"
#include "stdarg.h"

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
	_putchar(va_arg(args, int));

	return (1);
}
