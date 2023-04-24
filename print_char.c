#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - prints a single character
 * @args: a va_list of arguments containing a single
 * character to be printed
 *
 * Return: the number of characters printed (in this case,
 * always 1)
 */
int print_char(va_list va)
{
	char buffer[2];

	buffer[0] = va_arg(va, int);
	buffer[1] = '\0';

	return (write(1, buffer, 1));
}
