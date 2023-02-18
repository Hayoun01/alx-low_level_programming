#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints numbers from 0-9
 *		followerd by new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar(10);
	return (0);
}
