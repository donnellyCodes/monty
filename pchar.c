#include "monty.h"
/**
 * pchar_s - prints char at the top of stack
 * @stack: double pointer to the stack
 * @line_number: current line of bytecodes
 */
void pchar_s(stack_t **stack, unsigned int line_number)
{
	int number = 0;
	stack_t *tmp = *stack;

	if (!tmp)
	{
		p_errors(11, line_number);
		exit(EXIT_FAILURE);
	}
	number = tmp->n;
	if (number < 0 || number > 127)
	{
		p_errors(10, line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", tmp->n);
}
