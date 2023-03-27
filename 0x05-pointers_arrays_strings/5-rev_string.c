#include "main.h"

/**
 * rev_string - reverse
 * @s: string
 * Return: void
 */

void rev_string(char *s)
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
