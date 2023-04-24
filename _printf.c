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
	conv_spec conversions[] = {{'c', print_char}, {'s', print_str}, {'\0', NULL}};
	va_list args;
	unsigned int i, j;
	int num_chars = 0, valid_specifier_flag;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		valid_specifier_flag = 0;
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			for (j = 0; conversions[j].specifier != '\0'; j++)
			{
				if (format[i] == conversions[j].specifier)
				{
					num_chars += conversions[j].func(args);
					valid_specifier_flag = 1;
					break;
				}
			}
			if (!valid_specifier_flag)
			{
				num_chars += _putchar('%');
				num_chars += _putchar(format[i]);
			}
		}
		else
		{
			num_chars += _putchar(format[i]);
		}
	}
	va_end(args);
	return (num_chars);
}
