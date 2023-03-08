/**
 * wildcmp - Compares two strings considering the * character as a wildcard.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
	if (!*s1 && !*(s2 + 1))
		return (1);
	else if (*s1 && !*(s2 + 1))
		return (0);
	else if (!*s1 && *(s2 + 1))
		return (wildcmp(s1, s2 + 1));
	else
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else if (*s1 == *s2)
	{
	if (!*s1)
		return (1);
	else
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
		return (0);
}
