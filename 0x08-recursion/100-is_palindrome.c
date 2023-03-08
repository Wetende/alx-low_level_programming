/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
		return (is_palindrome(s + 1) && is_palindrome(s + len - 2));

		return (0);
}

