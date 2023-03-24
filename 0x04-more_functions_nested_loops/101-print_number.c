#include "main.h"

/**
 * print_number - print
 * Description: "it only accepts numbers and prints them"
 * @n: input
 * Return: n
 */

void print_number(int n)
{
	int stored = n, k, count = 0, x = 1, divider = 1;

	if (stored < 0)
	{
		stored = stored * -1;
		n = n * -1;
		_putchar(45);
	}
	else if (stored == 0)
	{
		_putchar(48);
	}
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	while (x < count)
	{
		divider = divider * 10;
		x++;
	}
	for (k = 0; k < count; k++)
	{
		if (k == 0)
		{
			_putchar(stored / divider + '0');
		}
		else if (k >= 1)
		{
			_putchar((stored / divider) % 10 + '0');
		}
		else if (k == count - 1)
		{
			_putchar(stored % 10 + '0');
		}
		divider = divider / 10;
	}
}
