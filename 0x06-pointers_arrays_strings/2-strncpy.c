#include "main.h"
/**
 * _strncpy - functiin that copies a string
 * @dest: destination of the string
 * @src:source of the string
 * @n:iterates and used to acess the indexes in the strings
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
