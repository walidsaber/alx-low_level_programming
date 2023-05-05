#include "main.h"

/**
 * flip_bits - flip bits
 * @n: num 1
 * @m: num 2
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	size_t count = 0;

	while (x != 0)
	{
		count = count + (x & 1);
		x = x >> 1;
	}
	return (count);
}
