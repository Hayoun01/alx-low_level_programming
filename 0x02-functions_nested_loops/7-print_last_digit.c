#include "main.h"

/**
 * print_last_digit - printes last digit.
 *
 * @n: take a number.
 *
 * Return: the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	int lst = n % 10;

	_putchar('0' + lst);
	return (lst);
}
