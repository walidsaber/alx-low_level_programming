#include "main.h"


/**
 * get_bit - get bit of given index
 * @n: num
 * @index: index
 * Return: -1 if NULL or error, 0 if success, 1 exit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	else if (index == '\0')
		return (-1);
	return (1);
}
