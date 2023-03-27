#include "main.h"
#include <stdio.h>
/**
 * print_array - array
 * @a: arr
 * @n: length
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (n != '\0')
	{
		if (n > 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
		i++;
		n--;
	}
}

