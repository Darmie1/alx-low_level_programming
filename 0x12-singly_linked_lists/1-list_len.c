#include "lists.h"
#include <stddef.h>


/**
 * list_len - this function that returns the number of elements
 * in a linked list_t list
 * @h: h is a pointer to a list_t object
 * Return: 0
 */

size_t list_len(const list_t *h)
{
	size_t cct = 0;

	while (h != NULL)
	{
		cct++;
		h = h->next;
	}
	return (cct);
}
