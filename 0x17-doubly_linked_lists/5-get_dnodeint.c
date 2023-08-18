#include "lists.h"

/**
 * get_dnodeint_at_index - the functiin returns the nth node of a list
 * @head: pointer
 * @index: of the node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *Curr = head;
	unsigned int ite;

	for (ite = 0; ite < index && Curr != NULL; ite++)
	{
		Curr = Curr->next;
	}
	return (Curr);
}
