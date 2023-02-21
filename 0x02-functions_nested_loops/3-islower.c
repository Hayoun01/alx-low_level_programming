#include "main.h"

/**
 * _islower - Checks if a character is lower
 * @c: take one character.
 * Return: 1 if is lower 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
