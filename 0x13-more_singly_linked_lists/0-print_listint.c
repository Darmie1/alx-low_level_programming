#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 * of a listint_t list
 * @h: pointer to str
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t cct = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cct++;
		h = h->next;
	}
	return (cct);
}
