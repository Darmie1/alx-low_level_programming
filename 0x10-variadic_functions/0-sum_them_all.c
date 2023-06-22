#include "variadic_functions.h"

/**
 * sum_them_all - this function returns the sum of all its parameters
 * @n: first fixed parameter passed
 * @...: this ellipsis is always the last parameter in variadic func
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int p;
	int num;
	va_list args;

	va_start(args, n);
	for (p = 0; p < n; p++)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);
	return (sum);
}
