#include <stdio.h>

/**
* main - Entry point
*
* Description: print 0-9 and separate with a comma
* Return: Always 0 (Sucesss)
*/

int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		putchar(counter + 48);
		if (counter != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
