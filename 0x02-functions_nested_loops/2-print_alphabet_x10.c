#include "main.h"

/**
 * main - check the code.
 * A program to print alphabets in lowercase ten times
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
