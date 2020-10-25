/*
 * File name:	monty_pool3.c
 * Authors:	Luis Miguel Vargas
 *		Robinson Montes
 */

#include "monty.h"

/**
 * monty_rotl - A function that rotates the stack to the top.
 * @stack: The pointer to the stack list.
 * @line_number: The line number of a Monty bytecodes file.
 * Description: The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one.
 */
void monty_rotl(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *cursor = *stack;
	(void)line_number;

	if (*stack)
	{
		temp = cursor->n;
		while (cursor->next != NULL)
		{
			cursor->n = cursor->next->n;
			cursor = cursor->next;
		}
		cursor->n = temp;
	}
}

/**
 * monty_rotr - A function that rotates the stack to the bottom.
 * @stack: The pointer to the stack list.
 * @line_number: The line number of a Monty bytecodes file.
 * Description: The last element of the stack becomes the top element
 * of the stack.
 */
void monty_rotr(stack_t **stack, unsigned int line_number)
{
	int temp;
	stack_t *cursor = *stack;
	(void)line_number;

	if (*stack)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		temp = cursor->n;
		while (cursor->prev != NULL)
		{
			cursor->n = cursor->prev->n;
			cursor = cursor->prev;
		}
		cursor->n = temp;
	}
}
