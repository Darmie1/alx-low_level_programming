#include "main.h"
/**
 * *create_array - creates an array of chars
 * @size: specifies the size of the array,
 * @c: it represents the character to be initialized in the array
 * Return: NULL if size = 0 and returns a pointer
 */

char *create_array(unsigned int size, char c)
{
	char *ar = (char *) malloc(size * sizeof(char));
	unsigned int z;

	if (size == 0)
	{
		return  (NULL);
	}

	if (ar == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < size; z++)
	{
		ar[z] = c;
	}
	return (ar);
}
