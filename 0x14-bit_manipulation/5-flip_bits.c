#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 *				to get from one number to another.
 *
 * @n: the num.
 * @m: the num of flip.
 *
 * Return: the num of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_m = n ^ m;
	unsigned int bit_to_fl = 0;

	while (n_m)
	{
		bit_to_fl += (n_m & 1);
		n_m >>= 1;
	}
	return (bit_to_fl);
}
