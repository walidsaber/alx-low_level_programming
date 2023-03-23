#include "main.h"

/**
 * print_diagonal - diagonal
 * Description: "draws a diagonal line"
 * @n: is a input
 * Return: void
 */

void print_diagonal(int n)
{
	int i, x = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			while (x < i)
			{
				_putchar(32);
				x++;
			}
			_putchar(92);
			_putchar('\n');
			x = 0;
		}
	}
	else
	{
		_putchar('\n');
	}
}
