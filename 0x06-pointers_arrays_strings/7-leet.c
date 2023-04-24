#include "main.h"
/**
 * leet - function that encode a string
 * @a: argument
 * Return: 0
 */
char *leet(char *a)
{
	char *p = a;
	char *lp = "43107";
	char *lt = "aAeEoOtTlL";
	int i, j;

	while (*p)
	{
		i = 0;
		while (lt[i])
	{
		if (*p == lt[i])
		{
			j = i / 2;
			*p = lp[j];
			break;
		}
		i++;
	}
		p++;
	}
	return (a);
}
