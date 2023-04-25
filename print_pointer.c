#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_pointer - prints the address of a pointer
 * in hexadecimal format
 * @args: the argument containing the pointer to print
 *
 * Return: the number of characters printed
 */
int print_pointer(va_list args)
{
	void *pointer = va_arg(args, void *);
	unsigned long x = (unsigned long)pointer;

	if (pointer == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (2 + hex_caster(x));
}

/**
 * hex_caster - cast an integer to hexadecimal
 * @n: number to print
 *
 * Return: string length
 */
int hex_caster(unsigned long n)
{
	char c;

	if (n >= 16)
		return (hex_caster(n / 16) + hex_caster(n % 16));
	c = n <= 9 ? '0' + n : 'a' + n - 10;

	return (_putchar(c));
}
