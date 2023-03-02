#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 *
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int i = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / i > 9)
	i *= 10;

	while (i > 0)
	{
	_putchar('0' + n / i);
	n %= i;
	i /= 10;
	}
}

