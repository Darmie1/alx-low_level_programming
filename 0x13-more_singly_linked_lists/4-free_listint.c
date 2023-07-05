#include "lists.h"

/**
 * free_listint - This is a function that frees a listint_t list.
 * @head: pointer to the begining of a list
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *noW;

	while (head != NULL)
	{
		noW = head;
		head = head->next;
		free(noW);
	}
}
