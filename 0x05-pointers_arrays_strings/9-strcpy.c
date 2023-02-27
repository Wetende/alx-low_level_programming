#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{

	if (dest == NULL || src == NULL)
		return (NULL);
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		if (i >= sizeof(dest) - 1)
		{
			/* Error: dest buffer too small */
		return (NULL);
		}
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
