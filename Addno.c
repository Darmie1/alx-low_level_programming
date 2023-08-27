#include "monty.h"
/**
 * addno - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: nothing
*/
void addno(stack_t **head, int n)
{

	stack_t *Nnode, *a;

	a = *head;
	Nnode = malloc(sizeof(stack_t));
	if (Nnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (a)
		a->prev = Nnode;
	Nnode->n = n;
	Nnode->next = *head;
	Nnode->prev = NULL;
	*head = Nnode;
}
