#include "main.h"

/**
 * _isupper: Check if the char is upper.
 *
 * @c: ASCII value.
 *
 * Return: 1 if the char is upper otherwise return 0;
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
