#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: a grid
 * @height: height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{

	for (; height >= 0 && grid; height--)
		free(grid[height]);
	free(grid);
}
