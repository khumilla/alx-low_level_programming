#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2D grid from task 3 alloc grid
 * @grid: pointer to another pointer
 * @height: the height of the grid
 *
 * Return: always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
