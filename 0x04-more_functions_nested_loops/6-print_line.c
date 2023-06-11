#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: argument that tells the number of times a character should be printed
 * Return: 0
 */
void print_line(int n)
{
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 0; s < n; s++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
