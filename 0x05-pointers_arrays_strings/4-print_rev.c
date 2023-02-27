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

	while (*(s + c) != '\0')
		c += 1;

	while (c > 0)
	{
		_putchar(*(s + c));
		c -= 1;
	}
	_putchar('\n');
}
