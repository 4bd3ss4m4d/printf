#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_revstr -  prints a str in reverse
 * @args: a va_list
 *
 * Return: length of th estrung
 */
int print_revstr(va_list args)
{

	char *s = va_arg(args, char *);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
