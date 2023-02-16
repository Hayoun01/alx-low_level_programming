#include <unistd.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints a quote
 * Return: 1
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, quo, strlen(quo));
	return (1);
}
