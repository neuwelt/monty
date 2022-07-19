#include "monty.h"

/**
 * _rotr - rotates the stack to the bottom.
 * @stack: double pointer to the begining of the linked list
 * @line_number: script line number
 *
 * Return: void
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack)
		*stack = (*stack)->prev;
}
