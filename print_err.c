#include "monty.h"
/**
 * print_err - prints an error message
 * @message: The message number
 * @ln: The line number
 * Return: Nothing.
 */
void print_err(int message, int ln)
{
	if (message == 2)
		fprintf(stderr, "L%d: can't pint, stack empty\n", ln);
	else if (message == 3)
		fprintf(stderr, "L%d: can't pop an empty stack\n", ln);
	else if (message == 4)
		fprintf(stderr, "L%d: can't swap, stack too short\n", ln);
	else
		return;
}
