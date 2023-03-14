#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * is_space - checks whether a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if c is a whitespace character, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in str.
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
		{
			count++;
		}
	}

	return (count);
}

/**
 * word_len - computes the length of a word.
 * @str: The string containing the word.
 *
 * Return: The length of the word starting at str.
 */
int word_len(char *str)
{
	int len = 0;

	while (*str != '\0' && !is_space(*str))
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * strtow - splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings or NULL or empty.
 */
char **strtow(char *str)
{
	int num_words, word_idx, i;
	int len;
	char **words;

	if (str == NULL || *str == '\0' || (*str == ' ' && *(str + 1) == '\0'))
	{
		return (NULL);
	}

	num_words = count_words(str);
	words = (char **) malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	word_idx = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]))
		{
			len = word_len(str + i);

			words[word_idx] = malloc((len + 1) * sizeof(char));
			if (words[word_idx] == NULL)
			{
				return (NULL);
			}
			strncpy(words[word_idx], str + i, len);
			words[word_idx][len] = '\0';
			word_idx++;
			i += len - 1;
		}
	}
	words[word_idx] = NULL;

	return (words);
}

