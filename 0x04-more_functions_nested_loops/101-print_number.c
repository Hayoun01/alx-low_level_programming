#include "main.h"

/**
 * print_number - a function that prints an integer.
 *
 * @n: a digit.
 *
 * Return: Nothing
 */
void print_number(int n)
i{
	unsigned int dig = n;

	if (n < 0)
	{
		_putchar('-');
		dig = -dig;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

