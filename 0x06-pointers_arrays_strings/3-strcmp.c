#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: 1st string.
 * @s2: 2nd string.
 *
 * Return: 0 if strs are same otherwise return somthing else.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (cmp == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		cmp = s1[i] - s2[i];
		i++;
	}
	return (cmp);
}
