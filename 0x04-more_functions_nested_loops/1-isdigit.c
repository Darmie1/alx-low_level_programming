#include "main.h"

/**
 *_isdigit - functuon to check for a digit
 *
 * @c: c is the parameter given
 * Return: 1 if c is a digit and zero otherwise
 */
int _isdigit(int c)
{
	if (c == 48 && c <= 57)
		return (1);
	else
		return (0);
}
