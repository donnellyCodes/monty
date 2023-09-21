#include "monty.h"
/**
 * mod_s - function to carry out modulation of the second value in stack
 * @stack: double pointer to stack
 * @line_number: current line of bytecodes
 */
void mod_s(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		p_errors(9, line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		p_errors(7, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next->n % (*stack)->n;
	(*stack)->next->n = temp;
	pop_s(stack, line_number);
}
