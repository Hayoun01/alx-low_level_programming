#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array
 *		of chars, and initializes it with
 *		a specific char.
 *
 * @size: size of array
 * @c: char
 *
 * Return: a pointer to array otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (p && size > 0)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	else
		return ('\0');
}
