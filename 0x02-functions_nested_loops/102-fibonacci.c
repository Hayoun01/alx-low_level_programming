#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long f1 = 0, f2 = 1, f3 = 0;
	int n;

	while (n < 50)
	{
		f3 = f1 + f2;
		printf("%lu", f3);
		f1 = f2;
		f2 = f3;
		if (n != 49)
			printf(", ");
		n++;
	}
	printf("\n");
	return (0);
}
