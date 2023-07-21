#include "main.h"

/**
 * get_bit - this is a function that returns the
 * value of a bit at agiven index
 * @index: index that start from 0
 * @n: represents the number
 * Return: value of the bit if no error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cover;

	cover = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n & cover) != 0;
}
