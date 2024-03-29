#include <stddef.h>
#include "lists.h"
/**
 * listint_len - this function  returns the
 * number of elements in a linked listint_t list
 * @h: pointer
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	size_t dam = 0;

	while (h != NULL)
	{
		dam++;
		h = h->next;
	}
	return (dam);
}
