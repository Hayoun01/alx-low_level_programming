#include "main.h"
/**
 * comp - compares each character of the string.
 * @s: string
 * @n1: n1.
 * @n2: n2.
 * Return: 1 if a string is a palindrome otherwise 0.
 */
int comp(char *s, int n1, int n2)
{
	if (s[n1] == s[n2])
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * len - calc the length of a string.
 * @s: string
 * Return: length of a string.
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * is_palindrome - a function that returns 1 if a string
 *		is a palindrome and 0 if not.
 * @s: string.
 * Return: 1 if a string is a palindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (comp(s, 0, len(s) - 1));
}

