#include "main.h"

/**
 * print_unsigned_ - print numbers in decimal
 * @n: input number
 *
 * Return: string length
 */
int print_unsigned_(unsigned int n)
{
	char digit;

	if (n >= 10)
		return (print_unsigned_(n / 10) + print_unsigned_(n % 10));
	digit = '0' + n;
	return (write(1, &digit, 1));
}
/**
 * print_unsigned_integer - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_unsigned_integer(va_list va)
{
	return (print_unsigned_(va_arg(va, unsigned int)));
}
