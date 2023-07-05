#include "lists.h"

/**
 * free_listint2 - this func frees a listint_t list.
 * and sets the head to NULL
 * @head: pointer to list
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *curR;
	listint_t *temporal;

	if (head == NULL)
		return;
	curR = *head;

	while (curR != NULL)
	{
		temporal = curR;
		curR = curR->next;
		free(temporal);
	}
	*head = NULL;
}
