#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
	* main - Entry point
	* Description: 'Basic Uses of If else statements'
	* Return: Always 0 (Success)
*/
int main(void)
{
	/* The random Integer */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My own Code */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
