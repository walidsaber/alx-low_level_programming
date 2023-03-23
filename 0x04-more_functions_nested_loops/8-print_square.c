#include "main.h"

/**
 * print_square - square
 * Description: "prints a square"
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
