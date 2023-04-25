#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct conversion_specifier - match the conversion
 * specifiers for printf
 * @spec: a string representing the conversion specifie
 * @func: a pointer to the function that handles the conversion
 */
typedef struct conversion_specifier
{
	char *spec;
	int (*func)(va_list);
} conv_spec;

int _printf(const char *format, ...);
int print_format(const char *format, va_list args);
int _putchar(char c);
int check_char(char type);
int print_inv_spec(char prev_format, char format, int count);
int print_specifier(char format, va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args);
void recur_int(int num);
int print_int_b(va_list args);
void recur_int_b(int num);

#endif /* MAIN_H */
