#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - is a function that
 * returns the nth node of a listint_t linked list.
 * @index: is the index of the node
 * @head: the head of the node
 * Return: 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int co = 0;

	while (head != NULL)
	{
		if (co == index)
			return (head);
		co++;
		head = head->next;
	}
	return (NULL);
}
