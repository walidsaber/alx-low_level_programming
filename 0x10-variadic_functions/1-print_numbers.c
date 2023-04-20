#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print nums
 * @separator: sep
 * @n: const int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list n_list;
	unsigned int i;
	int hold;

	va_start(n_list, n);

	for (i = 0; i < n; i++)
	{
		hold = va_arg(n_list, int);
		printf("%d", hold);
		if (i != (n - 1) && serparator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(n_list);
}
