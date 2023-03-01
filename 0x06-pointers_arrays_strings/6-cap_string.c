#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 *
 * @s: a string.
 *
 * Return: 0 if strs are same otherwise return somthing else.
 */
char *cap_string(char *s)
{
	int i, j;
	char *sym = ",;.!?\"(){} \t\n";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; sym[j]; j++)
			if (s[i] == sym[j])
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
	}
	return (s);
}
