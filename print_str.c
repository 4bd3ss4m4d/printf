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
	int str_length;

	str = va_arg(args, char *);
	str_length = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str_length++;
		str++;
	}

	return (str_length);
}
