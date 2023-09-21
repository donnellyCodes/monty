#include "monty.h"
/**
 * add_s - adds the two top values in a stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 */
void add_s(stack_t **stack, unsigned int line_number)
{
	int temp;

	if(*stack == NULL || (*stack)->next == NULL)
	{
		p_errors(4, line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n + (*stack)->next->element;
	(*stack)->next->element = temp;
	pop_s(stock, line_number);
}
