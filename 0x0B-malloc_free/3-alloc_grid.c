#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array to b licated
 * @height: rray to be located (patamrter two)
 * Return: null
 */
int **alloc_grid(int width, int height)
{
	int **gd = (int **) malloc(height * sizeof(int *));
	int i;
	int m;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (gd == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gd[i] = (int *) malloc(width * sizeof(int));
		{
			if (gd[i] == NULL)
			{
				for (m = 0; m < i; m++)
			{
				free(gd[m]);
			}
		free(gd);
		return (NULL);

	}
	for (m = 0; m < width; m++)
		gd[i][m] = 0;
		}
	}
	return (gd);
}
