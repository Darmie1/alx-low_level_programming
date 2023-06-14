#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is a duplicate of the str
 * @str : string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	size_t len = 0;
	size_t z;
	char *dup = (char *) malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	if (dup == NULL)
	{
		return (NULL);
	}
	for (z = 0; z <= len; z++)
	{
		dup[z] = str[z];
	}
	return (dup);
}
