#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 *
 * @n: number of parameters
 *
 * Return: the sum otherwise 0
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
