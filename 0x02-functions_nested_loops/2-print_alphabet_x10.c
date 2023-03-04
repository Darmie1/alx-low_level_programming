#include "main.h"
/**
 * print_alphabet_x10 - printing alphabet ten times
 * return: void
 */
void print_alphabet_x10(void)
{
	char let;
	int i = 0;

	while (i <= 9)
	{
		for (let = 'a'; let <= 'z'; let++)

		_putchar(let);

		_putchar('\n');
		i++;
	}
}
