#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the largest
 *		prime factor of the number 612852475143.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long num = 612852475143;
	int i = 2;

	while (num > 1)
		if (num % i == 0)
			num /= i;
		else
			i += 1;
	printf("%d\n", i);
	return (0);
}
