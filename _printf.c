#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - function my printf
 * @format: string whit format to print
 *
 * Return: number of chars that print
 */
int _printf(const char *format, ...)
{
	int text_length;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	text_length = 0;

	text_length = print_format(format, args);

	va_end(args);

	return (text_length);
}
