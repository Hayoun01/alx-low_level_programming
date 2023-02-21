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
	int lst = n % 10;
	
	
	if (lst < 0)
		lst *= -1;

	_putchar('0' + lst);
	return (lst);
}
