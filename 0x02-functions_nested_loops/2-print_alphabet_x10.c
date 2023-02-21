#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet x10.
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char c;
	int loop;

	while (loop <= 10)
	{
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
	loop++;
	}
}
