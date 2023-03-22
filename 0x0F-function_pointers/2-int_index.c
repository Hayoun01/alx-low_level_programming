#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 *
 * @array: an array of int
 * @size: size of array
 * @cmp: function that cmp
 *
 * Return: the index of the first element otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
