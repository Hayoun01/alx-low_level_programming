#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 *					prints it to the POSIX
 * @filename: the filename
 * @letters: num of letters
 *
 * Return: the actual number of letters 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, f;
	char *buf;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);
	r = read(f, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	if (write(STDOUT_FILENO, buf, r) != r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(f);
	return (r);
}
