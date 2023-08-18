#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: the pointer to thenxt node
 * @n: the number to be added
 * Return: it returns the address of the new element
 * or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NewN = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *curr_update = *head;

	if (NewN == NULL)
	{
		return (NULL);
	}
	NewN->n = n;
	NewN->next = NULL;

	if (*head == NULL)
	{
		NewN->prev = NULL;
		*head = NewN;
		return (NewN);
	}
	while (curr_update->next != NULL)
	{
		curr_update = curr_update->next;
	}
	curr_update->next = NewN;
	NewN->prev = curr_update;
	return (NewN);
}
