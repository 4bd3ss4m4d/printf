#include "main.h"

/**
 * _reversed_puts_recursion - check code
 * @s: string to display
 *
 * Return: string length
 */
int _reversed_puts_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_reversed_puts_recursion(s + 1) + write(1, s, 1));
}
/**
 * print_reversed_string - check code
 * @va: variadic list
 * Return: string length
 */
int print_reversed_string(va_list va)
{
	return (_reversed_puts_recursion(va_arg(va, char *)));
}
