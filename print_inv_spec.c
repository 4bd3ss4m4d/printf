#include "main.h"

/**
 * print_inv_spec - prints an invalid format specifier
 * @prev_format: the previous format specifier character
 * @format: the invalid format specifier character
 * @count: the current count of characters printed
 *
 * Return: the updated count of characters printed
 */
int print_inv_spec(char prev_format, char format, int count)
{
	count += _putchar('%');

	if (prev_format == ' ')
	{
		count += _putchar(' ');
		count += _putchar(format);
	}
	else
		count += _putchar(format);

	return (count);
}
