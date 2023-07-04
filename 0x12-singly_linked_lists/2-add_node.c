#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - this function that adds a new node at the
 *  beginning of a list_t list
 *  @head: begining of node
 *  @str: input string
 *  Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tnn = (list_t *)malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (tnn == NULL)
		return (NULL);
	tnn->str = strdup(str);
	if (tnn->str == NULL)
	{
		free(tnn);
		return (NULL);
	}
	tnn->len = strlen(str);
	tnn->next = *head;
	*head = tnn;
	return (tnn);
}
