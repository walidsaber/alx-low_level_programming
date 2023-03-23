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
		for (i = 1; i <= n; i++)
		{
			_putchar(47);
			_putchar('\n');
			while (x < i)
			{
				_putchar(32);
				x++;
			}
			x = 0;
		}
	}
	_putchar('\n')
}
