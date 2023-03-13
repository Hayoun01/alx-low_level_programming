#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that make a copy of a string.
 *
 * @str: string
 *
 * Return: a pointer to array otherwise NULL
 */
char *_strdup(char *str)
{
	int i, count = 0;
	char *c;

	if (str == NULL)
		return ('\0');
	for (i = 0; str[i]; i++)
		count++;
	c = (char *) malloc(count + 1);
	if (c == NULL)
		return ('\0');

	for (i = 0; i < count; i++)
		c[i] = str[i];
	return (c);

}
