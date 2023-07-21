#include "main.h"

/**
 * set_bit - this is a function that sets
 * the value of a bit to 1 at a particular index given
 * @index: it starts from 0
 * @n: pointer to the number
 * Return: 1 if successful ans -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
