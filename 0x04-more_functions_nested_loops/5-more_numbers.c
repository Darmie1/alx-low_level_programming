#include "main.h"
/**
 *more_numbers - this function will print 1-14 ten times when being called
 *return: 0
 */
void more_numbers(void)
{
	int ii, jj;

	for (ii = 0; ii <= 9; ii++)
	{
		for (jj = 0; jj <= 14; jj++)
		{
			if (jj > 9)
			_putchar((jj / 10) + '0');
			_putchar((jj % 10) + '0');
		}
		_putchar('\n');
	}
}
