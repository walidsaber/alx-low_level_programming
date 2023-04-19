#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to be printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0, count = 0;

	while (name[i])
	{
		count++;
		i++;
	}
	for (i = 0; i < count; i++)
	{
		putchar(name[i]);
	}
}
