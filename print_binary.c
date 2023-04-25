#include "main.h"

/**
 * to_binary - check code
 * @n: input number
 *
 * Return: string length
 */
int to_binary(unsigned int n)
{
	char digit;

	if (n >= 2)
		return (to_binary(n / 2) + to_binary(n % 2));
	digit = '0' + n;
	return (write(1, &digit, 1));
}
/**
 * print_to_binary - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_to_binary(va_list va)
{
	return (to_binary(va_arg(va, unsigned int)));
}
