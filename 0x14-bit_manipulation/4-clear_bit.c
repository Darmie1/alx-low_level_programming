#include "main.h"

/**
 * clear_bit - this particular function sets
 * the value of a bit to zero (0) at a particular index given
 * @index: it starts from 0 of the bit to be set
 * @n: pointer to the number
 * Return: 1 if successful ans -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dm = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n = *n & dm;

	return (1);
}
