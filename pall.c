#include "monty.h"
/**
 * pall_s - prints value of stack_t
 * @stack: double pointer to stack_t
 * @line_num: tracks number of the line
 * Return: o
 */
void pall_s(stack_t **stack, unisigned int line_num)
{
	stack_t *temp = *stack;
	(void)line_num;

	while (temp != NULL)
	{
		printf("%d\n", temp->element);
		temp = temp->next;
	}
}
