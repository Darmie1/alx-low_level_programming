#include "main.h"
/**
 * print_square - function that prints a square and end with a new line
 * @size: the number of type the character will be printed
 * Return: 0
 *
 */

void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\0');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
