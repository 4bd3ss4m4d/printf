#include "main.h"

/**
 * print_hexadecimal - print numbers
 * @va: variadic list
 * Return: string length
 */
int print_hexadecimal(va_list va)
{
	return (n_caster(va_arg(va, unsigned int), 16, 0));
}
