#include "main.h"

/**
 * print_triangle - triangle
 * Description: "prints a triangle"
 * Return: Void
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i,k,space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space >= 1; space--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
