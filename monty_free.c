/*
 * File name:   monty_free.c
 * Authors:     Luis Miguel Vargas
 *              Robinson Montes
 */

#include "monty.h"

/**
 * free_stack - A function that frees the memory allocated for stack.
 * @stack: Pointer to the doubly linked list representation of a stack.
 * Return: Nothing.
 */

void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
