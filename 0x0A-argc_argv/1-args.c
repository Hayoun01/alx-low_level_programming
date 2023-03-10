#include <stdio.h>
/**
 * main - Entry Point.
 *
 * Description: prints the number of arguments passed into it.
 *
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
