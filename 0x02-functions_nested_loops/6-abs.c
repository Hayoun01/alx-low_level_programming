#include "main.h"

/**
 * _abs - computes the absolute value.
 * @n: take a number.
 * Return: abs of an integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
