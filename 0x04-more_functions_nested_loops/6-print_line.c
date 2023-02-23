#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: the number of times the character _ should be printed.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int count;


		for (count = 0; count < n; count++)
			_putchar('_');
	}
	_putchar('\n');
}
