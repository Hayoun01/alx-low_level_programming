#include "main.h"
/**
 * divise - Helper.
 *
 * @m: a number.
 * @n: a number.
 *
 * Return: if the integer is a prime number.
 */
int divise(int n, int m)
{
	if (n % m == 0)
		return (0);
	if (m == n / 2)
		return (1);
	return (divise(n, m + 1));
}
/**
* is_prime_number - a function that returns 1 if
*		the input integer is a prime number,
*		otherwise return 0.
*
* @n: a number.
*
* Return: 1 if the integer is a prime number, otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n >= 2 && n <= 3)
		return (1);
	return (divise(n, 2));
}
