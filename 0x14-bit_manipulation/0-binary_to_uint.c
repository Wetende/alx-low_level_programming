#include "main.h"

/**
 * _stoi - Convert a character to an unsigned integer
 * @c: The character to be converted
 *
 * Return: The converted unsigned integer
 */
unsigned int _stoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - Calculate the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int length = 0;

	for (; s[length]; length++)
		;

	return (length);
}

/**
 * binary_to_uint - Convert a binary string to an unsigned decimal number
 * @b: The binary string to be converted
 *
 * Return: The converted unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0, tmp = 0, expo = 1;

	if (!b)
		return (0);

	for (i = _strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		tmp = _stoi(b[i]);
		result += tmp * expo;
	}

	return (result);
}

