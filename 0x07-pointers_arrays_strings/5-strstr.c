#include "main.h"

/**
* _strstr - a function that locates a substring.
*
* @haystack: string
* @needle: string
*
* Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (*needle == 0)
		return (haystack);
	for (; *haystack; haystack++)
	{
		j = 0;

		if (haystack[j] == needle[j])
			for (; needle[j] == haystack[j]; j++)
				if (needle[j + 1] == '\0')
					return (haystack);
	}
	return ('\0');
}
