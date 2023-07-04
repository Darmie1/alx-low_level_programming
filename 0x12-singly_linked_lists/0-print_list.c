#include "lists.h"
/**
 * print_list - This function here prints all element
 * of a iist
 * @h: the poin
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	size_t find = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		find++;
		h = h->next;
	}
	return (find);
}
