#include "main.h"
/**
 * _strcmp - function that compare strings
 * @s1: first parameter
 * @s2:second parameter
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int me = 0;

	while (s1[me] == s2[me])
	{
		if (s1[me] == '\0')
		{
			return (0);
		}
		me++;
	}
	return (s1[me] - s2[me]);
}
