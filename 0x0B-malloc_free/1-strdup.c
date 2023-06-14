#include "main.h"

/**
 * *_strdup - returns a pointer to a new string which is a duplicate of the str
 * @*str : string to be duplicated
 */
char *_strdup(char *str)
{
	size_t len = 0;
	char *dup;
	size_t z;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	(char *) malloc((len + 1) * sizeof(char));
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
