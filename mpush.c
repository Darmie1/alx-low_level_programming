#include "monty.h"
/**
 * d_push - add node to the stack
 * @head: stack head
 * @count: line_number
 * Return: nothing
*/
void d_push(stack_t **head, unsigned int count)
{
	int n, j = 0, flag = 0;

	if (da.argu)
	{
		if (da.argu[0] == '-')
			j++;
		for (; da.argu[j] != '\0'; j++)
		{
			if (da.argu[j] > 57 || da.argu[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(da.file);
			free(da.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(da.file);
		free(da.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(da.argu);
	if (da.swi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
