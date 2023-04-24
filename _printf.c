#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 * @...: variable number of arguments to be printed
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	conv_spec conversions[] = {
	    {'c', print_char},
	    {'s', print_str}};
	va_list args;
	unsigned int i;
	int num_chars = 0, valid_specifier_flag = 0;
	size_t num_conversions = sizeof(conversions) / sizeof(conversions[0]);

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; i < num_conversions; i++)
			{
				if (*format == conversions[i].specifier)
				{
					num_chars += conversions[i].func(args);
					valid_specifier_flag = 1;
					break;
				}
			}
			if (!valid_specifier_flag)
			{
				_putchar('%');
				_putchar(*format);
				num_chars += 2;
			}
		}
		else
		{
			_putchar(*format);
			num_chars++;
		}
		format++;
	}
	return (num_chars);
}
