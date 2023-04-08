#include "main.h"
/**
 * flip_bits - a function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int n = 1;
	char *endi = (char *)&n;
	return (*endi == 1);
}
