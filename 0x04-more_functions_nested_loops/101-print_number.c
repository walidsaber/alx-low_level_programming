#include "main.h"

/**
 * print_number - print
 * Description: "it only accepts numbers and prints them"
 * @n: input
 * Return: void
 */

void print_number(int n)
{
	int stored = n;

	if ( n < 0)
	{
		stored = n * -1;
		_putchar(45);
	}
	if ( stored / 10)
	{
		print_number(stored / 10);
	}
	_putchar((stored % 10) + '0');
}
