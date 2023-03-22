#include <stdio.h>
#include "main.h"

/**
 * main - entry
 * Description: "long long int "
 * Return: success 0
 */
int main(void)
{
	int i;

	unsigned long a = 1, b = 2, sum;

	for (i = 1; i < 98; i++)
	{
		if (i != 98)
		{
			printf("%lu, ", a);
			sum = a + b;
			a = b;
			b = sum;
		} else
		{
			printf("%lu\n", a);
		}
	}
return (0);
}
