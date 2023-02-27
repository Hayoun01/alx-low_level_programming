#include "main.h"

/**
 * rev_string - a function that reverses a string.
 *
 * @s: an array of characters;
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int c = 0;
	int j, i;
	char ch;

	while (*(s + c) != '\0')
		c += 1;

	j = c - 1;
	for (i = 0; j >= 0 &&  i < j; i++, j--)
	{
		ch = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = ch;
	}
}
