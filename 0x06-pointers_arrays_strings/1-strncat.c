#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, co;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (co = 0; co < n; co++)
	{
		dest[x + co] = src[co];
		if (src[co] == '\0')
			co = n;
	}

	return (dest);
}
