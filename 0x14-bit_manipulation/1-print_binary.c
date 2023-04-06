#include "main.h"

/**
 * print_binary - Convert a decimal number to binary and print the result
 * @n: The decimal number to be converted
 */
void print_binary(unsigned long int n)
{
	int i, flag;

	if (n == 0)
	{
		_putchar('0');
	}

	for (flag = 0, i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			flag = 1;
		}

		if (flag == 1)
		{
			((n >> i) & 1) ? _putchar('1') : _putchar('0');
		}
	}
}

