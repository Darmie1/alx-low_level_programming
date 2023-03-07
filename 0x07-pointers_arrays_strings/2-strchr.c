#include "main.h"

/**
* _strchr - Locates a character in a string.
*@s: The string to be searched.
*@c: The character to be located.
*Return: If c is found - a pointer to the first occurence.
*If c is not found - NULL
*/

char *_strchr(char *s, char c)
	int pre;

	for (pre = 0; s[pre] >= '\0'; pre++)
	{
		if (s[pre] == c)
			return (s + pre);
	}
	return ('\0');
}
