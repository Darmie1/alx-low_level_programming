#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find its square root
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int fd = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n >= 4)
		fd = _sqrt_recursion(n / 4) * 2;
	if ((fd + 1) * (fd + 1) <= n && n < (fd + 2) * (fd + 2))
		return (fd + 1);
	if (fd * fd <= n && n < (fd + 1) * (fd + 1))
		return (fd);
	return (-1);
}
