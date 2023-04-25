#include "main.h"

/**
 * specifier_selector - check code
 * @format: character specifier
 * @va: variadic list
 *
 * Return: string length
 */
int specifier_selector(const char *format, va_list va)
{
	printer printers[] = {
		{"c", print_char},
		{"i", print_integer},
		{"d", print_integer},
		{"R", print_rot13},
		{"r", print_reversed_string},
		{"b", print_to_binary},
		{"o", print_octal},
		{"x", print_hexadecimal},
		{"X", print_hexadecimal_capitalized},
		{"u", print_unsigned_integer},
		{"s", print_string},
		{"S", print_non_printable},
		{"p", print_pointer},
		{NULL, NULL}};
	int j;

	j = 0;
	while (printers[j].print != NULL && *format != *(printers[j].type))
		j++;
	return (printers[j].print != NULL ? printers[j].print(va) : -1);
}
