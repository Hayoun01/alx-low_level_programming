#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: an array of characters;
 *
 * Return: length of the string;
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count += 1;
	return (count);
}
