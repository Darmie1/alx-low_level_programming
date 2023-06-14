#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: parameter representing str to be concatnated
 * @s2:parametr2
 * Return: null
 */
char *str_concat(char *s1, char *s2)
{
	size_t l1 = 0;
	size_t l2 = 0;
	size_t i;
	size_t j;
	char *c = (char *) malloc((l1 + l2 + 1) * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
		while (s1[l1] != '\0')
			l1++;
		while (s2[l2] != '\0')
			l2++;
		if (c == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < l1; i++)
			c[i] = s1[i];
		for (j = 0; j < l2; j++)
			c[i + j] = s2[j];
		c[i + j] = '\0';
		return (c);
}
