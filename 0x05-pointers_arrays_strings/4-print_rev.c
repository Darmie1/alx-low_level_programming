#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string in reverse
 */

void print_rev(char *s)
{
	int y, m;

	int m = 0;

	while (s[m] != '\0')
		m++;
	for (y = m - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
