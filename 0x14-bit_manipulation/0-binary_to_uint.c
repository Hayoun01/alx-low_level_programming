#include "main.h"
#include <string.h>
/**
 * binary_to_uint - Converts a binary to a uint
 *
 * @b: the binary to convert
 *
 * Return: the number of bytes in the binary
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, base2;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		len++;
	}
	len--;
	for (base2 = 1; len >= 0; len--, base2 *= 2)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		/* '1' & 1 = 49 & 1 = 0011 0001 & 0000 0001 = 0000 0001 = 1 */
		/* '0' & 1 = 48 & 1 = 0011 0000 & 0000 0001 = 0000 0000 = 0 */
		else if (b[len] & 1)
		{
			result += base2;
		}
	}
	return (result);
}
