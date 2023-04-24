#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct conversion_specifier - struct to hold conversion specifier
 * and its corresponding function
 * @spec: a string representing the conversion specifie
 * @func: a pointer to the function that handles the conversion
 *
 * Description: This struct is used to hold a conversion specifier
 * and a pointer to the function
 */
struct conversion_specifier
{
	char *spec;
	int (*func)(va_list);
};

/**
 * conv_spec - Typedef for conversion_specifier
 */
typedef struct conversion_specifier conv_spec;

/* Function prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_prc(va_list args);

#endif /* MAIN_H */
