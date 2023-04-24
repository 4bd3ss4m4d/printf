#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_str - prints a string
 * @args: a va_list of arguments containing a single
 * string to be printed
 *
 * Return: the number of characters printed (always the length
 * of the string, or 6 if str is NULL)
 */
int print_str(va_list args)
{
	char *str;
	int str_length;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (str_length = 0; str[str_length] != '\0'; str_length++)
		_putchar(str[str_length]);

	return (str_length);
}
