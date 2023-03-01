#include "main.h"
/**
 * char *_strcat - appends the src string to the dest string, overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 *
 * Return always dest.
 */


char *_strcat(char *dest, char *src)
{
	// declare a pointer to store the address of dest
	char *p = dest;

	// loop until the end of dest
	while (*p != '\0')
	{
	p++;
	}

	while (*src != '\0')
	{
	// copy each character from src to dest
	*p = *src;
	p++;
	src++;
	}

	// add a terminating null byte at the end of dest
	*p = '\0';

	// return the pointer to dest
	return dest;
}
