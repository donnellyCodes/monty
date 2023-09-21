#include "monty.h"
/**
 * execute - function to check for common opcode
 * @token: contains the opcode to execute
 * @stack: doubly linked list representation of stack
 * @line_num: line number where opcode is found
 * Return: EXIT_SUCCESS, or EXIT_FAILURE
 */
int execute(char **token, stack_t **stack, unsigned int line_num)
{
	unsigned int j = 0;

	instruction_t op[] = {
		{"pall", pall_s},
		{"pint", pint_s},
		{"pop", pop_s},
		{"swap", swap_s},
		{"add", add_s},
		{"sub", sub_s},
		{"mul", mul_s},
		{"div", div_s},
		{"mod", mod_s},
		{"pchar", pchar_s},
		{"pstr", pstr_s},
		{"rotl", rotl_s},
		{"rotr", rotr_s},
		{"null", NULL}
	};
	for (j = 0; j < 14; j++)
	{
		if (strcmp(op[j].opcode, token[0]) == 0)
		{
			op[j].f(stack, line_num);
			return (EXIT_SUCCESS);
		}
	}
	free_stack(stack);
	fprintf(stderr, "L%i: unknown instruction %s\n", line_num, token[0]);
	return (EXIT_FAILURE);
}
