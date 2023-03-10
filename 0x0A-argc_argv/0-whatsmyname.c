#include <stdio.h>
/**
 * main - Entry Point.
 *
 * Description: prints program name.
 *
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
