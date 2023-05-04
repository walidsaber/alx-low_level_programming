#include "main.h"

/**
 * print_binary - print binary
 * @n: long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int stored = n;

	if (stored > 1 && stored != '\0')
		print_binary(stored >> 1);

	_putchar((stored & 1) + '0');
}
