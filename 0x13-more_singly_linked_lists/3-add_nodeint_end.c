#include "lists.h"

/**
 * add_nodeint_end - this function adds
 * a new node at the end of a listint_t list
 * @head: begining of the node
 * @n: integer to set nee node
 * Return: the address of the new element
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neWN = (listint_t *)malloc(sizeof(listint_t));
	listint_t *cuRR = *head;

	if (neWN == NULL)
		return (NULL);
	neWN->n = n;
	neWN->next = NULL;

	if (*head == NULL)
	{
		*head = neWN;
	}
	else
	{
		while (cuRR->next != NULL)
		{
			cuRR = cuRR->next;
		}
		cuRR->next = neWN;
	}
	return (neWN);
}
