#include"main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 *		from n to 98, followed by a
 *		new line.
 *
 * @n: range.
 *
 * Return: Nothing.
*/

void print_to_98(int n)
{
	int loop;

	if (n < 98)
		for (loop = n; loop < 98; loop++)
			printf("%d, ", loop);
	else
		for (loop = n; loop > 98; loop--)
			printf("%d, ", loop);
	printf("98\n");
}
