#include "main.h"


/**
 * binary_to_uint - this func converts binary
 * numb to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 *
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int iterate;

	if (b == NULL)
	{
		return (0);
	}
	for (iterate = 0; b[iterate] != '\0'; iterate++)
	{
		if (b[iterate] != '0' && b[iterate] != '1')
			return (0);
		result = (result << 1) | (b[iterate] - '0');
	}
		return (result);
}
