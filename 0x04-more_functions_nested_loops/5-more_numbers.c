#include "main.h"
/**
 *more_numbers - function that prints 5 times of numbers
 *return: 0
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i < 15)
		_putchar('\n');
		i++;
		{
			while (j < 14)
			_putchar(j + '0');
			j++;
		}
	_putchar('\n');
}
