#include "monty.h"
/**
 * mul_s - multiplies two values at the top of stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 */
void mul_s(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		p_errors(8, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n * (*stack)->next->n;
	(*stack)->next->n = temp;
	pop_s(stack, line_number);
}
