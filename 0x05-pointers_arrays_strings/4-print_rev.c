#include "main.h"

/**
 * print_rev - rev
 * @s: char
 * Return: Void
 */

void print_rev(char *s)
{
	int i = 0, count = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	count--;
	while (count)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar(s[0]);
	_putchar('\n');
}

