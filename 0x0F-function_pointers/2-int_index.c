#include "function_pointers.h"
/**
 * int_index - function that search for an integer
 * @array: array
 * @size: size if elemnt in an array
 * @cmp: pointer to one of the 3
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
