#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#define MAX_LINE_LENGTH 1024

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


int execute(char **token, stack_t **stack, unsigned int line_num);
int push_s(stack_t **stack, char **token, unsigned int line_num);
int push_q(stack_t **stack, char **token, unsigned int line_num);
int run_bytecodes(FILE *fd);
int empty_line(char *line, char *delims);
char **tokenize(char *line, char *delim);

void pall_s(stack_t **stack, unsigned int line_num);
void pint_s(stack_t **stack, unsigned int line_number);
void pop_s(stack_t **stack, unsigned int line_number);
void swap_s(stack_t **stack, unsigned int line_number);
void add_s(stack_t **stack, unsigned int line_number);
void sub_s(stack_t **stack, unsigned int line_number);
void div_s(stack_t **stack, unsigned int line_number);
void mul_s(stack_t **stack, unsigned int line_number);
void mod_s(stack_t **stack, unsigned int line_number);
void rotl_s(stack_t **stack, unsigned int line_number);
void pchar_s(stack_t **stack, unsigned int line_number);
void rotr_s(stack_t **stack, unsigned int line_number);
void pstr_s(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);

int user_error_message(int e);
int open_error_message(char *fName);
int p_errors(int e, unsigned int line_num);


#endif
