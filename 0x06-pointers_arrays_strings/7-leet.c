#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: a string.
 *
 * Return: s;
 */
char *leet(char *s)
{
	int i, j;
	char *sym = "OL^EA^^T";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; sym[j]; j++)
			if (s[i] == sym[j] || s[i] - 32 == sym[j])
				s[i] = j + '0';
	}
	return (s);
}
