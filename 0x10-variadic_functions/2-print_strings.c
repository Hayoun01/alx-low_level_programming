#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
