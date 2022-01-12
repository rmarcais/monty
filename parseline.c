#include "monty.h"
/**
 * parseline - parses a line
 * @stack: the stack
 * @line: the line
 * @ln: the line number
 * Return: -1, 0 or 1.
 */
int parseline(stack_t **stack, char *line, int ln)
{
	instruction_t instru[] = {{"push", add_dnode}, {"pall", print_stack},
				  {"pint", _pint}, {"pop", _pop},
				  {"swap", _swap}, {NULL, NULL}};
	int i;
	char *token, *token2;

	token = strtok(line, " \n");
	if (token == NULL)
	{
		ln++;
		return (-1);
	}
	for (i = 0; instru[i].opcode; i++)
		if (strcmp(token, instru[i].opcode) == 0)
		{
			if (((i == 2 || i == 3) && *stack == NULL) ||
			    (i == 4 && (*stack)->next == NULL))
			{
				print_err(i, ln);
				return (0);
			}
			token2 = strtok(NULL, " \n");
			if (i == 0)
			{
				if (isinteger(token2, ln) == -1)
					return (0);
				instru[i].f(stack, atoi(token2));
			}
			else
				instru[i].f(stack, ln);
			return (1);
		}
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, token);
	return (0);
}
