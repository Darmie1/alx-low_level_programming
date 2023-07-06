#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position of a linked list
 * @head: start of the nodes
 * @idx:is the index of the list where the new node should be added
 * @n: the num to be added
 * Return:0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	unsigned int co = 0;
	listint_t *new_N = (listint_t *)malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new_N == NULL)
		return (NULL);
	new_N->n = n;
	if (idx == 0)
	{
		new_N->next = *head;
		*head = new_N;
		return (new_N);
	}
	while (curr != NULL && co < idx - 1)
	{
		curr = curr->next;
		co++;
	}
	if (curr == NULL)
	{
		free(new_N);
		return (NULL);
	}
	new_N->next = curr->next;
	curr->next = new_N;

	return (new_N);
}
