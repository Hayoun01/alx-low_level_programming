#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 *
 * Return: Nothing.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int count, sp;


		for (count = 1; count <= size; count++)
		{
			for (sp = size; sp > count; sp--)
				_putchar(' ');
			for (sp = 0; sp < count; sp++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
