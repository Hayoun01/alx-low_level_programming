#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Return: the last digit.
 */
void jack_bauer(void)
{
	int start = 0, stop = 24;
	int min;

	while (start < stop)
	{
		if (start < 10)
			_putchar('0');
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + start);
			_putchar(':');
			if (min < 10)
				_putchar('0');
			_putchar('0' + min);
			_putchar('\n')
		}
	}
}
