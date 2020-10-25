#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

/*==========================================================================*/
/*==========================     DATA STRUCTURES    ========================*/
/*==========================================================================*/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*=========================================================================*/
/*=========================   OPCODE FUNCTIONS  ===========================*/
/*=========================================================================*/

/* monty_main.c */
int main(int ac, char **av);

/* monty_free.c */
void free_stack(stack_t **stack);

/* monty_run.c */
int monty_run(FILE *fd);
char **tokening(char *line, char *delim);
int empty_line(char *line, char *delims);

/* monty_exec.c */
int execute(char **token, stack_t **stack, unsigned int line_num);
int monty_push(stack_t **stack, char **token, unsigned int line_num);
int monty_pushq(stack_t **stack, char **token, unsigned int line_num);
void monty_pall(stack_t **stack, unsigned int line_num);

/* monty_pool1.c */
void monty_pint(stack_t **stack, unsigned int line_num);
void monty_pop(stack_t **stack, unsigned int line_num);
void monty_swap(stack_t **stack, unsigned int line_num);
void monty_sub(stack_t **stack, unsigned int line_num);
void monty_add(stack_t **stack, unsigned int line_num);

/* monty_pool2.c */
void monty_mul(stack_t **stack, unsigned int line_number);
void monty_div(stack_t **stack, unsigned int line_number);
void monty_mod(stack_t **stack, unsigned int line_number);
void monty_pchar(stack_t **stack, unsigned int line_number);
void monty_pstr(stack_t **stack, unsigned int line_number);

/* monty_pool3.c */
void monty_rotl(stack_t **stack, unsigned int line_number);
void monty_rotr(stack_t **stack, unsigned int line_number);

/*=========================================================================*/
/*=========================        ERRORS       ===========================*/
/*=========================================================================*/

/* monty_errors.c */
int usage_error(int flag);
int open_error(char *filename);
int f_errors(int flag, unsigned int line_num);

#endif /* __MONTY_H__ */
