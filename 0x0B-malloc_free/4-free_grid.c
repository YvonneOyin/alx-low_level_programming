#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 *
 * @grid: grid to be freed
 * @height: height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
