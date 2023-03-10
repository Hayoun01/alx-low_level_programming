#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point.
 *
 * Description: multiplies two numbers.
 *
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: 0 if success otherwise 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
