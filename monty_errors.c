/*
 * File name: errors.c
 * Authors:	Luis Miguel Vargas
 *		Robinson Montes
 */

#include "monty.h"

/**
 * usage_error - Afunction that prints usage error message.
 * @flag: Type of error: 0 malloc'd failed, or 1 usage.
 * Return: EXIT_FAILURE.
 */
int usage_error(int flag)
{
	char *errors[2] = {"Error: malloc failed", "USAGE: monty file"};

	fprintf(stderr, "%s\n", errors[flag]);
	return (EXIT_FAILURE);
}

/**
 * open_error - A function that prints file open error message.
 * @filename: Name of file failed to open.
 * Return: EXIT_FAILURE.
 */
int open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * f_errors - A function that print the errors.
 * @flag: The index to type of error.
 * @line_num: The number of line in file with error.
 * Return: EXIT_FAILURE.
 */
int f_errors(int flag, unsigned int line_num)
{
	char *errors[] = {"usage: push integer", "can\'t pint, stack empty",
	     "can\'t pop an empty stack", "can\'t swap, stack too short",
	     "can\'t add, stack too short", "can\'t sub, stack too short",
	     "can\'t div, stack too short", "division by zero",
	     "can\'t mul, stack too short", "can\'t mod, stack too short",
	     "can\'t pchar, value out of range", "can\'t pchar, stack empty"};

	fprintf(stderr, "L%d: %s\n", line_num, errors[flag]);
	return (EXIT_FAILURE);
}
