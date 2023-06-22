#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: elements
 * @cmp: is a pointer to the function to be used to compare values
 * @size: is the number of elements in the array
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int bek;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (bek = 0; bek < size; bek++)
	{
		if (cmp(array[bek]) != 0)
		{
			return (bek);
		}
	}
	return (bek);
}
