#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to
 *		a 2 dimensional array of integers.
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: a pointer to 2 dem array otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **list = malloc(sizeof(int *) * height);

	if (list && width > 0 && height > 0)
	{
		for (i = 0; i < height; i++)
		{
			list[i] = malloc(sizeof(int) * width);
			if (!list[i])
			{
				for (i--; i >= 0 ; i--)
					free(list[i]);
				free(list);
				return ('\0');
			}
		}
		for (i = 0; i < height; i++)
			for (j = 0; j < width; j++)
				list[i][j] = 0;
		return (list);
	}
	return ('\0');

}
