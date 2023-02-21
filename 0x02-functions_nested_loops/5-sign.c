#include "main.h"

/**
 * print_sign - Checks sign of a num.
 * @n: take number.
 * Return: 1 if is alpha 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
