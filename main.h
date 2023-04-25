#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct conversion_specifier - match the conversion
 * specifiers for printf
 * @spec: a string representing the conversion specifie
 * @func: a pointer to the function that handles the conversion
 *
 */
typedef struct conversion_specifier
{
	char *spec;
	int (*func)(va_list);
} conv_spec;

/* Function prototypes */
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_str(va_list args);
int print_prc(va_list args);

#endif /* MAIN_H */
