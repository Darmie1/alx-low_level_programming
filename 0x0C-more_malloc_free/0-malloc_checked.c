#include "main.h"

/**
 * malloc_checked - function to allocate memory
 * @b: where to allocate memory size
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *pointr = malloc(b);
	char *errordisplayed = "Memory allocation failed\n";
	int k;

	{
		for (k = 0; errordisplayed[k] != '\0'; k++)
			if (pointr == NULL)
		{
			_putchar(errordisplayed[k]);
		}
		exit(98);
	}
	return (pointr);
}
