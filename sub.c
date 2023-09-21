#include "monty.h"
/**
 * sub_s - subtracts second value from top of stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecode
 */
void sub_s(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		p_errors(5, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next->element - (*stack)->element;
	(*stack)->next->element = temp;
	pop_s(stack, line_number);
}
