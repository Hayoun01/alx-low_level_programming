#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the binary representation
 * @index: the index of the bit
 *
 * Return: the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}
