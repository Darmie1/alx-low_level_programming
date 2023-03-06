#include "main.h"

/**
 * puts_half - print half of a string
 * @str: function parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int g;
	char count = 0;

	for (g = 0 ; str[g] != '\0' ; g++)
		count++;
	if (count % 2 == 0)
	{
		for (g = count / 2 ; str[g] != '\0' ; g++)
			_putchar(str[g]);
		_putchar('\n');
	}
	else if (count % 2 != 0)
	{
		for (g = (count - 1) / 2 ; str[g] != '\0' ; g++)
			_putchar(str[g]);
		_putchar('\n');
	}
}
