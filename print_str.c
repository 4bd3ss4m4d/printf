#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_str - prints a string
 * @args: a va_list of arguments containing a single
 * string to be printed
 *
 * Return: the number of characters printed (in this case,
 * always 1)
 */
int print_str(va_list args)
{
	char *str;
	int len;
	char *p;

	str = va_arg(args, char *);
	len = 0;

	if (str == NULL)
		str = "(null)";

	for (p = str; *p; ++p, ++len)
		_putchar(*p);

	return (len);
}
