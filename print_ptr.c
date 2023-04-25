#include "main.h"

/**
 * long_caster - cast an integer to hexadecimal
 * @n: input number
 *
 * Return: string length
 */
int long_caster(unsigned long n)
{
	char c;

	if (n >= 16)
		return (long_caster(n / 16) + long_caster(n % 16));
	c = n <= 9 ? '0' + n : 'a' + n - 10;
	return (write(1, &c, 1));
}
/**
 * print_pointer - check code
 * @va: va_list arguments
 * Return: number of characters printed
 */
int print_pointer(va_list va)
{
	void *pointer = va_arg(va, void *);
	unsigned long x = (unsigned long)pointer;

	if (pointer == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + long_caster(x));
}
