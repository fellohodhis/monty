#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Prints pop error messages for empty stacks
 * @line_number: line number in script where error occurred
 *
 * Return: (EXIT_FAILURE) always
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - Prints the pint error messages for empty stacks
 * @line_number: line number in monty bytecodes file where error occurred
 *
 * Retutn: (EXIT_FAILURE) always
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Prints monty math function error messages
 * for stacks smaller than two nodes
 * @line_number: Line number in monty bytecodes file where error occurred
 * @op: operation where the error occurred
 *
 * Retutn: (EXIT_FAILURE) always
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Prints division error messages for division by 0
 * @line_number: line number in monty bytecodes file where error occurred
 *
 * Return: (EXIT_FAILURE) always
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Prints pchar error messages for empty stacks
 * @line_number: line number in monty bytecodes file where error occurred
 * @message: the corresponding error message to print
 *
 * Return: (EXIT_FAILURE) always
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: cant pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}