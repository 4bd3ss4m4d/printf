#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Define a struct for the conversion specifiers */
typedef struct conversion_specifier
{
        char *spec;
        int (*func)();
} conv_spec;

/* Function prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_prc(va_list args);

#endif /* MAIN_H */
