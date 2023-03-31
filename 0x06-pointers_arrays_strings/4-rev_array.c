#include "main.h"

/**
 * reverse_array - main
 * @a: a
 * @n: n
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = n - 1; i >= n / 2; i--)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
	}
}
