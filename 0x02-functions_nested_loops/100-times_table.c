#include "main.h"

/**
 * print_times_table - table
 * Description: "prints the n times table"
 * @n: input value
 * Return: 0
 */
void print_times_table(int n)
{
	int i, y, m;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (y = 0; y <= n; y++)
			{
				m = i * y;

				if (y == 0)
				{
					_putchar(m + '0');
				} else if (m <= 9 && y != 0)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(m + '0');
				} else if (m > 9 && m <= 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				} else
				{
					_putchar(',');
					_putchar(32);
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
