#include <stdlib.h>
#include "lists.h"


/**
 * free_list - This function that frees a list_t list.
 * @head: pointer to a node
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *now = head;
	list_t *next;

	while (now != NULL)
	{
		next = now->next;
		free(now->str);
		free(now);
		now = next;
	}
}
