#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to be printed
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
