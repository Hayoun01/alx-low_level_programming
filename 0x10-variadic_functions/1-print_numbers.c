#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: the string to be printed between numbers.
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ptr, int), separator);
	printf("%d\n", va_arg(ptr, int));
	va_end(ptr);
}
