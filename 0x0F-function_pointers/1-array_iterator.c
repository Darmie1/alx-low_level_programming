#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this func executes a func given as parameter on each elem
 * @size: this is the size of the array
 * @array: to be iterated upon
 * @action: it is the pointer to the function being used
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t dam;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (dam = 0; dam < size; dam++)
	{
		action(array[dam]);
	}
}
