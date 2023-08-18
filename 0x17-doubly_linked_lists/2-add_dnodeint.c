#include "lists.h"


/**
 * add_dnodeint - this is afunction that adds a new node
 * at the beginning of a dlistint_t list
 * @head: het node with the pointer
 * to the previous equals to NULL
 * @n: node to be added
 * Return: 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newN = (dlistint_t *)malloc(sizeof(dlistint_t));

	{
		if (newN == NULL)
		return (NULL);
	}
	newN->n = n;
	newN->prev = NULL;
	newN->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newN;
	}
	*head = newN;

	return (newN);
}
