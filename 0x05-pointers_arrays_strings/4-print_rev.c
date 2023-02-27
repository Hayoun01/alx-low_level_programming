#include "main.h"

/**
 * print_rev - a function that prints a string
 *		in reverse, followed by a new line,
 *		to stdout.
 *
 * @s: an array of characters;
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (*(s + c) != '\0')
		c += 1;

	for (i = c - 1; i >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
