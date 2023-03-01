#include "main.h"
/**
 * rev_string - reverse a string
 * @s: f that reverses a str
 */

void rev_string(char *s)
{
	char gb = s[0];
	int y = 0;
	int x;

	while (s[y] != '\0')
		y++;
	for (x = 0; x < c; x++)
	{
		y--;
		gb = s[y];
		s[x] = s[y];
		s[y] = gb;
	}
}
