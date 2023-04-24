#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - produces output according to a format
 * @format: character string containing zero or more directives
 * @...: variable number of arguments to be printed
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	conv_spec convarr[] = {
	    {"%c", print_char}, {"%s", print_str}, {"%%", print_prc}, {"\0", NULL}};
	va_list args;
	unsigned int i, j, valid_specifier_flag, num_chars = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		valid_specifier_flag = 0;
		for (j = 0; convarr[j].func != NULL; j++)
		{
			if (format[i] == convarr[j].spec[0] && format[i + 1] == convarr[j].spec[1])
			{
				num_chars += convarr[j].func(args);
				valid_specifier_flag = 1;
				i++;
				break;
			}
		}
		if (!valid_specifier_flag)
			num_chars += _putchar(format[i]);
	}
	va_end(args);
	return (num_chars);
}
