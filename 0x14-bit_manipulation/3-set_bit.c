#include "main.h"

/**
 * set_bit - setting bit to 1
 * @n: n
 * @index: index
 * Return 1 if success, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == '\0' || index == '\0')
		return (-1);
	*n |= (1 << index);
	return (1);
}
