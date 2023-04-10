#include "main.h"
void exit_with_error(char *message, int status);
void cp_file(int src_fd, char *dest_file);
/**
 * main - a program that copies the content of a file to another file.
 *
 * @argc: The number of arguments
 * @argv: The arguments
 *
 * Return: 0 on success, otherwise exit with error code.
 */
int main(int argc, char **argv)
{
	int src_fd;

	if (argc != 3)
		exit_with_error("Usage: cp file_from file_to", 97);
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
		exit_with_error("Error: Can't read from file", 98);
	cp_file(src_fd, argv[2]);
	return (0);
}

/**
 * exit_with_error - Prints an error message to standard error and exits with
 *                   the given status code.
 * @message: The error message to print.
 * @status: The status code to exit with.
 *
 * Return: Nothing.
 */
void exit_with_error(char *message, int status)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(status);
}

/**
 * cp_file - Copies the contents of one file to another.
 * @src_fd: The file descriptor for the source file.
 * @dest_file: The path to the destination file.
 *
 * Return: Nothing.
 */
void cp_file(int src_fd, char *dest_file)
{
	char buffer[BUFSIZE];
	int dest_fd;
	ssize_t num_read, num_written;

	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
		exit_with_error("Error: Can't write to file", 99);
	while ((num_read = read(src_fd, buffer, BUFSIZE)) > 0)
	{
		num_written = write(dest_fd, buffer, num_read);
		if (num_written == -1)
			exit_with_error("Error: Can't write to file", 99);
	}
	if (num_read == -1)
		exit_with_error("Error: Can't read from file", 98);
	if (close(src_fd) == -1)
		exit_with_error("Error: Can't close file descriptor", 100);
	if (close(dest_fd) == -1)
		exit_with_error("Error: Can't close file descriptor", 100);
}
