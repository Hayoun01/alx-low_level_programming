#include "main.h"

/**
* _strspn - a function that gets the length of a prefix substring.
*
* @s: string
* @accept: accepted bytes.
*
* Return: the number of bytes in the initial segment of s.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != 32; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				count++;
	return(count);
}
