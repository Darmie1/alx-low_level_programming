#include "main.h"
/**
 * _strncat - functiin that concartenate two stringis
 * @dest: destination
 * @src:source
 * @n: third para
 * Return:pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
