#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - function that prints pop error messages
 * @line_number: error line number
 *
 * Return: EXIT_FAILURE
 */

int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - function that prints pint error message
 * @line_number: error line number
 *
 * Return: EXIT_FAILURE
 */

int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - function that prints monty math function error message
 * @line_number: Error line number
 *
 * @op: error location in operation
 * Return: EXIT_FAILURE
 */

int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * iv_error - function that prints division error message
 * @line_number: Error line number
 * Return: EXIT_FAILURE
 */

int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - function that prints pchar error
 * @line_number: error line number
 * @message: error message to print
 *
 * Return: EXIT_FAILURE
 */

int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
