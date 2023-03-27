#include "main.h"

/**
 * _puts - puts
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
