#include "main.h"

/**
 * print_array - print arrays of an int
 * return: 0
 * @a:  arrays are not pointers
 * @n:  print arrays of a number of element
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - i)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
