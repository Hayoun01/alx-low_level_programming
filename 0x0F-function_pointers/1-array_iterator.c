#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 *
 * @name: string
 * @f: a function that prints
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size)
		for (i = 0; i < size; i++)
			action(array[i]);
}
