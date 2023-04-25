#include "main.h"
#include <stdlib.h>

/**
 * print_format - prints a format
 * @format: The format to prints
 * @args: a list of variadic arguments
 *
 * Return: The length of the format
 */
int print_format(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += _putchar(format[i]);

			if (check_char(format[i]) == 0)
				count = print_inv_spec(format[i - 1], format[i], count);
			else
				count += print_specifier(format[i], args);
		}
		else
			count += _putchar(format[i]);

		i++;
	}

	return (count);
}
