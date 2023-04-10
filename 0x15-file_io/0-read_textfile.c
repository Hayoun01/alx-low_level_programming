#include "main.h"
/**
 * read_textfile -
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