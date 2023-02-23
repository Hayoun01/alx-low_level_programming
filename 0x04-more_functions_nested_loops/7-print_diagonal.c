#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: Where n is the number of times the character \ should be printed.
 *
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int count, sp;


		for (count = 0; count < n; count++)
		{
			for (sp = 0; sp < count; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
