#include "lists.h"

/**
 * free_dlistint - this func feees a list
 * @head: pointer
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr_N = head;
	dlistint_t *nNode = curr_N->next;

	while (curr_N != NULL)
	{
		free(curr_N);
		curr_N = nNode;
	}
}
