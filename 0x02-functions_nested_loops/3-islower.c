#include "main.h"
/**
 * _islower - check for lower case'
 * @c: check a charater
 * Return: 1 for lowercase and 0 for anything else
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
