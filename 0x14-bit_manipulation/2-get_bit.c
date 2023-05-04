#include "main.h"
/**
  * get_bit - gets value of int at an index
  * @n: input long integer
  * @index: index to start at
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	b = (n >> index) & 1;

	if ((b == 1) || (b == 0))
		return (b);
	else
		return (-1);
}
