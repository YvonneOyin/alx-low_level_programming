#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of the grid
 * @height: height of grid
 *
 * Return: a pointer or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (!(height > 0 && width > 0))
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(grid[a]);
			}
			free(grid);

			return (NULL);
		}
	}
	for (a = 0; b < width; b++)
		grid[a][b] = 0;
	return (grid);
}
