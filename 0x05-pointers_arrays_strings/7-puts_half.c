#include "main.h"

/**
 * puts_half - a function that prints a half of string,
 *	followed by a new line, to stdout.
 *
 * @str: an array of characters;
 *
 * Return: Nothing.
 */
void puts_half(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
		c += 1;
	if (c % 2 == 0)
		c /= 2;
	else
	{
		c = (c - 1) / 2;
		c++;
	}
	str += c;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar('\n');
}
