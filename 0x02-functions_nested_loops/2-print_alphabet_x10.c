#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int n, counter;

	counter = 0;

	while (counter < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		counter++;
		_putchar('\n');
	}
}
