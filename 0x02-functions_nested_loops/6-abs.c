#include "main.h"
/**
 *_abs - compute the absolute value of integer
 * @c 'the number to be computed
 * Return: the value of the integer
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
