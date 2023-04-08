#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: the binary representation
 * @index: the index of the bit
 *
 * Return: 1 if it works, 0 otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= (1ul << index);
	return (1);
}
