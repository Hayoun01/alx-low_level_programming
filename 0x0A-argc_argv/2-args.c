#include <stdio.h>
/**
 * main - Entry Point.
 *
 * Description: prints all arguments it receives.
 *
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}
