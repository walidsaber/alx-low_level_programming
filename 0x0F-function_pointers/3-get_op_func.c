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
		{NULL, NULL}
	};
	while (operator[i].op != NULL && *(operator[i].op) != *s)
		i++;
	return (operator[i].f);
}

