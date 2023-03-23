#include "main.h"

/**
 * more_numbers - nums
 * Return: void
 */

void more_numbers(void)
{
	int i, x = 0;

	for (i = 0; i <= 10; i++)
	{
	while (x <= 14)
	{
		if (x <= 9)
		{
			_putchar('0' + x);
			x++;
		}
		else
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			x++;
		}
	}
	x = 0;
	}
}
