#include "lists.h"
#include <stddef.h>

/**
 * delete_nodeint_at_index - function that deletes the node at a given
 * index in a listint_t linked list
 * @head: node begining
 * @index: the indx of d node to be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	unsigned int count = 0;
	listint_t *temp = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (curr != NULL && count < index - 1)
	{
		curr = curr->next;
		count++;
	}
	if (curr == NULL || curr->next == NULL)
		return (-1);

	curr->next = curr->next->next;
	free(temp);

	return (1);
}
