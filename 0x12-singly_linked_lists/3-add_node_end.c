#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This function that adds a new node at the
 * end of a list_t list
 * @head: pointer to a node
 * @str: thid ia the input string
 * Return: the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n = (list_t *)malloc(sizeof(list_t));
	list_t *now = *head;

	if (str == NULL)
		return (NULL);
	if (new_n == NULL)
		return (NULL);
	new_n->str = strdup(str);
	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}

	new_n->len = strlen(str);
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (now->next != NULL)
			now = now->next;
		now->next = new_n;
	}
	return (new_n);
}
