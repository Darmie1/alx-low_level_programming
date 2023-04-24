#include "main.h"
/**
 * string_toupper - converts upper to lowercase
 * @sup: argument
 * Return: 0
 */
char *string_toupper(char *sup)
{
	int m = 0;

	while (sup[m] != '\0')
	{
		if (sup[m] >= 'a' && sup[m] <= 'z')
		{
			sup[m] = sup[m] - ('a' - 'A');
		}
	m++;
	}
	return (sup);
}
