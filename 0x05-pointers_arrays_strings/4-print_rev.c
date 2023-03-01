#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string in reverse
 */

void print_rev(char *s)
{
	int y, x;

	int x = 0;

	while (s[x] != '\0')
		x++;
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
