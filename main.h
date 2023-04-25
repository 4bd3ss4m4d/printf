#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int print_to_binary(va_list);
int print_octal(va_list);
int print_hexadecimal(va_list);
int print_hexadecimal_capitalized(va_list);
int print_non_printable(va_list);
int print_reversed_string(va_list);
int print_rot13(va_list);
int print_pointer(va_list);
int print_unsigned_integer(va_list);
int n_caster(unsigned int, unsigned int, int);
int _printf(const char *, ...);
int specifier_selector(const char *format, va_list va);
/**
 *struct _printer - Struct _printer
 *@type: type specifier
 *@print: print function
 */
typedef struct _printer
{
	char *type;
	int (*print)(va_list);
} printer;

#endif
