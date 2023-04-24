#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to find its square root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int les = 1;
	int grt = n;
	int result;
	int mid;


	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	while (les <= grt)
	{
		mid = (les + grt) / 2;

		if (mid * mid == n)
			return (mid);

		if (mid * mid < n)
		{
			les = mid + 1;
			result = mid;
		}
		else
		{
			grt = mid - 1;
		}
	}

	return (result);
}
