#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name
 * @name: name to be printed
 * @f: pointer to function
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else if (f == NULL)
		return;
	f(name);
}
