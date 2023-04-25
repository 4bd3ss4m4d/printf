#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 * @...: variable number of arguments to be printed
 *
 * Return: the number of characters printed
 */
int _printf(const char *const format, ...)
{
	conv_spec conv_ar[] = {
	    {"%s", print_str},
	    {"%c", print_char},
	    {"%%", print_prc},
	    {NULL, NULL}};

	va_list args;
	int i = 0, j, len = 0;
	bool valid_format_specifier = false;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		valid_format_specifier = false;
		for (j = 0; conv_ar[j].spec != NULL; j++)
		{
			if (format[i] == conv_ar[j].spec[0] && format[i + 1] == conv_ar[j].spec[1])
			{
				len += conv_ar[j].func(args);
				valid_format_specifier = true;
				i++;
				break;
			}
		}
		if (!valid_format_specifier)
		{
			_putchar(format[i]);
			len++;
		}
	}
	va_end(args);
	return (len);
}
