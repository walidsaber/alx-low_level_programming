#include "main.h"

/**
 * print_line - straigh road
 * Description: "drawing a straight line in terminal"
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
