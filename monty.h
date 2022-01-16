#ifndef MONTY_H
#define MONTY_H
#define  _GNU_SOURCE
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define INSTRUCTIONS { \
		{"push", _push}, \
		{"pall", print_stack}, \
		{"pint", _pint}, \
		{"pop", _pop}, \
		{"swap", _swap}, \
		{"add", _add}, \
		{"sub", _sub}, \
		{"div", _div}, \
		{"mul", _mul}, \
		{"mod", _mod}, \
		{"pchar", _pchar}, \
		{"pstr", _pstr}, \
		{"rotl", _rotl}, \
		{"rotr", _rotr}, \
		{NULL, NULL}}
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void print_stack(stack_t **stack, unsigned int line_number);
void add_dnode(stack_t **stack, unsigned int line_number);
int isinteger(char *s, int ln);
void free_stack(stack_t **stack, unsigned int line_number);
int parseline(stack_t **stack, char *line, int ln);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void print_err(stack_t **stack, int message, int ln);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
int condition(stack_t **stack, int i);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
void _rotl(stack_t **stack, unsigned int line_number);
void _rotr(stack_t **stack, unsigned int line_number);
void add_dnodeint_end(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
extern int stack_or_queue;
#endif
