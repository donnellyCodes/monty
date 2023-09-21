#include "monty.h"
/**
 * pint_s - prints top value of the stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 * Return: value
 */
void pint_s(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (!tmp)
	{
		p_errors(1, line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", tmp->n);
}
