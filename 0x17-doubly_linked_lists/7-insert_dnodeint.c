#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at
 * a given index
 * @h: pointer
 * @idx: index of the list where the new node should be added
 * @n: node to be added
 * Return: the node at d given idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NNode = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *CURR = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	if (NNode == NULL)
		return (NULL);
		NNode->n = n;
	if (idx == 0)
	{
		NNode->prev = NULL;
		NNode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = NNode;
		}
		*h = NNode;
		return (NNode);
	}
	while (i < idx - 1)
	{
		if (CURR == NULL)
		{
			free(NNode);
			return (NULL);
		}
		CURR = CURR->next;
		i++;
	}
	if (CURR == NULL)
		free(NNode);
		return (NULL);
	NNode->prev = CURR;
	NNode->next = CURR->next;
	if (CURR->next != NULL)
		CURR->next->prev = NNode;
	CURR->next = NNode;
	return (NNode);
}
