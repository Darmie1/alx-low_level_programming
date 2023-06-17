#include "main.h"
/**
 * array_range - this func creates an array of integers
 * @min: arg 1
 * @max: argu 2
 * Return: 0
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int y;
	int *ary = malloc(size * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (ary == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < size; y++)
	{
		ary[y] = min++;
	}
	return (ary);
}
