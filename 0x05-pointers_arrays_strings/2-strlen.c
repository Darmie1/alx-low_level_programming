#include "main.h"
/**
 * _strlen - return the length of a string
 * @s:  using char
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /* start the counter fron num 0*/

	for (; *s++;)
		a++;
	return (a);
}
