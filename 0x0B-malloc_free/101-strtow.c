#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int words = 0;
	char *token;

	token = strtok(str, " ");

	while (token != NULL)
	{
		words++;
		token = strtok(NULL, " ");
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int words, i, w = 0;
	char *token;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	token = strtok(str, " ");

	while (token != NULL)
	{
		strings[w] = strdup(token);
		if (strings[w] == NULL)
		{
			for (i = 0; i < w; i++)
				free(strings[i]);
			free(strings);
			return (NULL);
		}
		w++;
		token = strtok(NULL, " ");
	}

	strings[w] = NULL;

	return (strings);
}

