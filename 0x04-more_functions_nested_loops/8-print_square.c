#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 *
 * @size: is the size of the square
 *
 * Return: Nothing.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
		_putchar('\n');
		}
	}
}
