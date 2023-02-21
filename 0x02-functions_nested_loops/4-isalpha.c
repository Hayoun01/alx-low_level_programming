#include "main.h"

/**
 * _isalpha - Checks if a character is alpha
 * @c: take one character.
 * Return: 1 if is alpha 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
