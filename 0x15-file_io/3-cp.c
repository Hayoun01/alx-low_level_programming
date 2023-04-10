#include "main.h"
char *make_buff(char *file);
void close_file(int f);
/**
 * main - a program that copies the content of a file to another file.
 *
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, otherwise exit with error code.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = make_buff(argv[1]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buff, BUFSIZE);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(file_to, buff, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(file_from, buff, BUFSIZE);
	} while (r > 0);
	free(buff);
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * make_buff - Allocates for a buffer.
 *
 * @file: The file to allocate for the buffer.
 *
 * Return: A pointer to the allocated buffer.
 */
char *make_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * BUFSIZE);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - close the file.
 *
 * @f: the file to be closed.
 */
void close_file(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}
