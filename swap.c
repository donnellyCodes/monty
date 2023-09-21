#include "monty.h"
/**
 * swap_s - swaps two values at the top of a stack
 * @stack: double pointer to the top of the stack
 * @line_number: current line of bytecodes
 */
void swap_s(stack_t **stack, unsigned int line_number)
{
	int temp;

	if(*stack == NULL || (*stack)->next == NULL)
	{
		p_errors(3, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next->element;
	(*stack)->next->element = (*stack)->element;
	(*stack)->element = temp;
}
