#include "3-calc.h"

/**
 * get_op_func - get op
 * @s: select
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t operator[] = {
		{"+", op_add}, {"-", op_sub},
		{"*", op_mul}, {"/", op_div},
		{"%", op_mod},
		{NULL, '\0'}
	};
	while (*operator[i].op != '\0' && *(operator[i].op) != *s)
		i++;
	return (operator[i].f);
}

