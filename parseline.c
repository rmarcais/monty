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
	int i;
	char *token, *token2;
	instruction_t instru[] = INSTRUCTIONS;

	token = strtok(line, " \n");
	if (token == NULL || strcmp(token, "nop") == 0 || token[0] == '#')
		return (-1);
	if (strcmp(token, "queue") == 0)
	{
		stack_or_queue = 1;
		return (-1);
	}
	else if (strcmp(token, "stack") == 0)
	{
		stack_or_queue = 0;
		return (-1);
	}
	for (i = 0; instru[i].opcode; i++)
		if (strcmp(token, instru[i].opcode) == 0)
		{
			if (condition(stack, i) == 1)
			{
				print_err(stack, i, ln);
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
