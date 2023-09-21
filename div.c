#include "monty.h"
/**
 * div_s - divides the second value from the top with the first value at the top
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 */
void div_s(stack_t **stack, unsigned int list_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		p_errors(6, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next->element / (*stack)->element;
	(*stack)->next->element = temp;
	pop_s(stack, line_number);
}
