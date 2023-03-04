#include "main.h"
/**
 * print_sign - of a number
 * @n: print sign of number
 * Return: 1 and prints 0 if n is greater
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
