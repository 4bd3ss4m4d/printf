#include "main.h"

/**
 * print_octal - print numbers
 * @va: variadic list
 *
 * Return: string length
 */
int print_octal(va_list va)
{
	return (n_caster(va_arg(va, unsigned int), 8, 0));
}
