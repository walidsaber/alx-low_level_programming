#include "main.h"

/**
 * swap_int - swp
 * @a: int
 * @b: int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
