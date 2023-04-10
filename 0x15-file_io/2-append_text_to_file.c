#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: the name of the file.
 * @text_content: the content of the file.
 *
 * Return: 1 on success, 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, b_written;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		b_written = write(f, text_content, strlen(text_content));
		if (b_written == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
