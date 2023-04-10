#include "main.h"
/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 if successful, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f, r;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		r = write(f, text_content, strlen(text_content));
		if (r == -1)
			return (-1);
	}
	close(f);
	return (1);
}
