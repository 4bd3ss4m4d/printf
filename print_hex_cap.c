#include "main.h"

/**
 * print_hexadecimal_capitalized - print numbers
 * @va: variadic list
 *
 * Return: string length
 */
int print_hexadecimal_capitalized(va_list va)
{
	return (n_caster(va_arg(va, unsigned int), 16, 1));
}
