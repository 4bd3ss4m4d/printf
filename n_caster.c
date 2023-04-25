#include "main.h"

/**
 * n_caster - cast an integer to binary, octal, hexadecimal
 * @n: input number
 * @b: integer
 * @cap: condition
 *
 * Return: string length
 */
int n_caster(unsigned int n, unsigned int b, int cap)
{
	char c;

	if (n >= b)
		return (n_caster(n / b, b, cap) + n_caster(n % b, b, cap));
	c = cap ? 'A' : 'a';
	c = n <= 9 ? '0' + n : c + n - 10;
	return (write(1, &c, 1));
}
