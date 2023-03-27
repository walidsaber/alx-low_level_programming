#include "main.h"

/**
 * puts_half - half
 * @str: var
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, count = 1, l = 0;

	while (str[i])
	{
		count++;
		l++;
		i++;
	}
	count /= 2;
	for (i = count; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
