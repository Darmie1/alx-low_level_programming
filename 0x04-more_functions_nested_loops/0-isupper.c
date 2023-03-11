#include "main.h"
/**
 * _isupper - function to check for uppercase character
 * @c: parameter given
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c == 65 &&  c <= 90)
		return (1);
	else
		return (0);
}
