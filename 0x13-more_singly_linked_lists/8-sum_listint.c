#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - this func returns the total addition  of all
 * the data of a linked list
 * @head: the begining of the nodes
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
