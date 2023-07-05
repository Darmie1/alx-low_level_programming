#include "lists.h"

/**
 * pop_listint - this func deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: pointer to list
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int data_set = (*head)->n;
	listint_t *temp = *head;


	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(temp);
	return (data_set);
}
