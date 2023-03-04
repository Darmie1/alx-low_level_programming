#include "main.h"
/**
 * _isalpha - checking for alphabetic character
 * @c: check for alpha
 * Return: return 1 if c is a letter, lowercase or uppe
 */

int _isalpha(int c)

{
	for ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
