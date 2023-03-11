#include "main.h"
/**
 * _isalpha - checking for alphabetic character
 * @c: check for alpha
 * Return: return 1 if c is a letter, lowercase or
 * uppercase
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
