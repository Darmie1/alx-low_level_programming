#include "main.h"
/**
 * puts2 - print every character of a string
 * @str: print string char
 * Return: print
 */

void puts2(char *str)
{
	int longi = 0;
	int w = 0;
	char *y = str;
	int m;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	w = longi - 1;
	for (m = 0 ; m <= w ; m++)
	{
		if (m % 2 == 0)
	{
		_putchar(str[m]);
	}
	}
	_putchar('\n');
}
