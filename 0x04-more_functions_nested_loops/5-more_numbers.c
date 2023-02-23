#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 *
 * Return: Nothing.
 */
void more_numbers(void)
{
	int c1, c2;
	int lo = 0;

	for (lo = 0; lo < 10; lo++)
	{
	c1 = 48;
	c2 = 47;

	while (c2 < 53)
	{
		_putchar(c1);
		if (c1 != 57 && c2 == 47)
		{
			c1++;
		}
		else
		{
			c1 = 49;
			if (c2 != 47)
				_putchar(c2);
			c2++;
		}
	}
	_putchar('\n');
	}
}
