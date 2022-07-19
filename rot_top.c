#include "monty.h"

/**
 * rot_top - rotates the stack to the top.
 * @stack:double pointer tot he begining of the linked list
 * @line_number: script line number
 *
 * Return: void
 */
void rot_top(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->next;
}
