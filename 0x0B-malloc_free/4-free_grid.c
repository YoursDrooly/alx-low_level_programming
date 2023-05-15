#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees alloc_grid
 * @grid: 2d array
 * @height: value of height
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
