#include "main.h"

/**
 * times_table - prints times table.
 *
 * Return: Nothing.
 */
void times_table(void)
{
	int m, n, o;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			o = m * n;
			if (o <= 9)
			{
				_putchar(' ');
				_putchar('0' + o);
			}
			else
			{
				_putchar('0' + (o / 10));
				_putchar('0' + (o % 10));
			}
		}
		_putchar('\n');
	}

}
