#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - is a function that prints all
 * the elements given in a dlistint_t list.
 * @h: this rep the pointer to the next node
 * Return: 0
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t num_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_count++;
	}
	return (num_count);
}
