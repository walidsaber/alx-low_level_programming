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
		i++;
		count++;
	}
	while (count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}

