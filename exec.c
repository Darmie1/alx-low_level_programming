#include "monty.h"
/**
* exe - exes the opcode
* @stack: head linked list - stack
* @count: line_count
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int exe(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", d_push}, {"pall", d_pall}, {"pint", d_pint},
				{"mpop", d_pop},
				{"mswap", d_swap},
				{"madd", d_add},
				{"mnop", d_nop},
				{"msub", d_sub},
				{"mdiv", d_div},
				{"mmul", d_mul},
				{"mmod", d_mod},
				{"mpchar", d_pchar},
				{"mpstr", d_pstr},
				{"mrotl", d_rotl},
				{"mrotr", d_rotr},
				{"mqueue", d_queue},
				{"mstack", d_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
