#include <stdio.h>

/**
 * main - prints the Fibonacci sequence whose values
 *	do not exceed 4 M write a program that finds
 *	and prints the sum of the even-valued terms,
 *	followed by a new line.
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0;
	long int sum;

	while (f3 < 4000000)
	{
		f3 = f1 + f2;
		if (f3 % 2 == 0)
			sum += f3;
		f1 = f2;
		f2 = f3;
	}
	printf("%ld\n", sum);
	return (0);
}
