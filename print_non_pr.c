#include "main.h"

/**
 * print_non_printable - handle the non printable characters
 * 0 < (ASCII value) < 32 or >= 127) are printed this way :\x,
 * folowwed by the ASCII ode value in hexa(upper case - always 2 char)
 * @va: va_list arguments
 *
 * Return: number of characters printed
 */
int print_non_printable(va_list va)
{
	int i, len = 0;
	char *s = va_arg(va, char *), zero = '0';
	unsigned int x;

	if (!s)
		return (0);
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			len += write(1, "\\x", 2);
			x = (unsigned int)s[i];
			if (x < 16)
				len += write(1, &zero, 1);
			len += n_caster(x, 16, 1);
		}
		else
			len += write(1, s + i, 1);
	}
	return (len);
}
