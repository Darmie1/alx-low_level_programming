#include "main.h"
/**
 * _puts - print a string
 * @str: a string
 * Return: length of string
 */

void _puts(char *str);
{
	int y = 0;

	while (str[y] != '\0')
	{
		_putchar (str[y]);
		y++;
	}
	_putchar('\n');
}
