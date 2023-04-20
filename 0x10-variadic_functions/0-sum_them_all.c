#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: const
 * Return: if n == 0 > return 0, otherwise return the sum;
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list n_list;

	if (n == 0)
		return (0);
	va_start(n_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(n_list, int);
	}
	va_end(n_list);
	return (sum);
}
