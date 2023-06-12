#include "main.h"
/**
 * print_diagonal - A function that draws a diagonal line on tge terminal
 * @n: the number of times a character should be printed
 * Return: 0
 */

void print_diagonal(int n)

{
	int m;
	int d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (d = 1; d <= m; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
