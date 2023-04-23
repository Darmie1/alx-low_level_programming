#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: function parameter 1
 * @src: function parameter 2
 * Return:pointer to one of the string
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
