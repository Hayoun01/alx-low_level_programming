#include <stdio.h>

/**
 * main - Entry point
 * Description: It prints the alphabet in lowercase
 *		and uppercase following by new line
 *		using just `putchar` and ASCII numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	char L1 = 'a';
	char L2 = 'A';

	while (L1 <= 'z')
	{
		putchar(L1);
		L1++;
	}
	while (L2 <= 'Z')
	{
		putchar(L2);
		L2++;
	}
	putchar(10);
	return (0);
}
