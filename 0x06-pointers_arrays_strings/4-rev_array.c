#include "main.h"
/**
 * reverse_array - function that reverse the arrays
 * @a: pointer to the first element of an array of intergers
 * @n: number of elements in the array
 * Return:0
 */
void reverse_array(int *a, int n)
{
	int u, tp;

	for (u = 0; u < n / 2; u++)
	{
	    tp = a[u];
	    a[u] = a[n - 1 - u];
	    a[n - 1 - u] = tp;
	}
}
