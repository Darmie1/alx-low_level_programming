#include "lists.h"
/**
 * sum_dlistint - returns the sum ofall the data
 * @head: pointer
 * Return: sum of node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_up = 0;

	dlistint_t *Curr = head;

	while (Curr != NULL)
	{
		sum_up += Curr->n;
		Curr = Curr->next;
	}
	return (sum_up);
}
