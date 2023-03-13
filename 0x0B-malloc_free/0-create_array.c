#include "main.h"
#include <stdlib.h>
/**
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(char) * size);

	if (p && size > 0)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	else
		return ('\0');
}
