#include "monty.h"
/**
 * d_pop - prints the top
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/
void d_pop(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(da.file);
		free(da.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
