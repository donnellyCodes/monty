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
	temp = (*stack)->element * (*stack)->next->element;
	(*stack)->next->element = temp;
	pop_s(stack, line_number);
}
