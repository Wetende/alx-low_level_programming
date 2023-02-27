#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no number was found
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

/* skip whitespace */
	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	s++;

	/* handle sign */
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
		sign = -1;
		s++;
	}

	/* convert digits */
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

