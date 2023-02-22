#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @param c The character to be checked.
 * @return Non-zero if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
