#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: first param
 * @size: sec param
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t overallsize = nmemb * size;
	void *sen = malloc(overallsize);



	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (sen == NULL)
	{
		return (NULL);
	}
	memset(sen, 0, overallsize);

	return (sen);
}
