#include "main.h"
/**
 * swap_int  - swap the values if two integers
 * @a: int 1
 * @b: int 2
 * return 0
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*b = *a;
	*a = *b;
}
