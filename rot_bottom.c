#include "monty.h"

/**
 * rot_bottom - rotates the stack to the bottom.
 * @stack: double pointer to the begining of the linked list
 * @line_number: script line number
 *
 * Return: void
 */
void rot_bottom(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->prev;
}
