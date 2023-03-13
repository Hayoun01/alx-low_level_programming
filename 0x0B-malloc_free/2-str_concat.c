#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to array otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, c1 = 0, c2 = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		c1++;
	for (j = 0; s2[j]; j++)
		c2++;
	c = (char *) malloc(sizeof(char) * (c1 + c2 + 1));
	if (c != NULL)
	{
		for (i = 0; i < c1; i++)
			c[i] = s1[i];
		for (j = 0; j < (c1 + c2); j++, i++)
			c[i] = s2[j];
		c[j] = '\0';
		return (c);
	}
	return ('\0');

}
