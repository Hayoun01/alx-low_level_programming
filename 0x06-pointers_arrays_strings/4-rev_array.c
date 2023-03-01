#include "main.h"

/**
 * reverse_array - a function that reverses the
 *		content of an array of integers.
 *
 * @a: point to an array
 * @n: number of elements of the array.
 *
 * Return: 0 if strs are same otherwise return somthing else.
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	int len = n / 2;

	for (i = 0; i < len; i++, n--)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
	}

}
