#include "main.h"

/**
 * _printf - check code
 * @text: text to display
 *
 * Return: string length
 */
int _printf(const char *text, ...)
{
	int i = 0, r, len = 0, condition = 0;
	va_list va;
	char c = '%';

	va_start(va, text);
	while (text != NULL && text[i] != '\0')
	{
		if (text[i] == c && condition == 0)
			condition = 1;
		else if (condition == 1)
		{
			r = specifier_selector(text + i, va);
			if (r < 0)
			{
				len += write(1, &c, 1);
				if (text[i] != c)
					len += write(1, text + i, 1);
			}
			else
				len += r;
			condition = 0;
		}
		else
			len += write(1, text + i, 1);
		i++;
	}
	va_end(va);
	return (text == NULL ? -1 : len);
}
