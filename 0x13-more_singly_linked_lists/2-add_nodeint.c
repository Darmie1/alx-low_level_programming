#include "lists.h"
/**
 * add_nodeint - this is a function that will add a
 * new node to the beginining of a listint_t list.
 * @head: the head of the list
 * @n: takes the new member
 * Return: 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnD = (listint_t *)malloc(sizeof(listint_t));

	if (nnD == NULL)
		return (NULL);
	nnD->n = n;
	nnD->next = *head;
	*head = nnD;

	return (nnD);
}
