#include "main.h"

/**
 * print_binary - this prints the binary representation
 * of numbers
 * @n: number to print in binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar('0' + (n & 1));
}
