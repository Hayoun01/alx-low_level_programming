#include "main.h"

/**
 * puts2 - a function that prints a string,
 *	followed by a new line, to stdout.
 *
 * @str: an array of characters;
 *
 * Return: Nothing.
 */
void puts2(char *str)
{
	int c = 0;

	while (*str != '\0')
	{
		if (c % 2 == 0)
			_putchar(*str);
		str += 1;
		c++;
	}
	_putchar('\n');
}
