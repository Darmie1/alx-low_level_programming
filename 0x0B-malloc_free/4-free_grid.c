#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: pointer to the 2-dimensional grid
 * @height: number of rows in the grid
 * Return: 0 (it returns nothing)
 */

void free_grid(int **grid, int height)
{
	int p;

	if (grid == NULL)
	{
		return;
	}
	for (p = 0; p < height; p++)
	{
		free(grid[p]);
	}
	free(grid);
}
