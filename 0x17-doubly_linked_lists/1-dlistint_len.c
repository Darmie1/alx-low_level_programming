#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of elem presents in
 * a linked list
 * @h: pointer
 * Return: the number of elements
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t counter_for_ele = 0;

	while (h != NULL)
	{
		counter_for_ele++;
		h = h->next;
	}
	return (counter_for_ele);
}
