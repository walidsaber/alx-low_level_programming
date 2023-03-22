#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: "fibonnaci numbers"
 * Return: always 0
 */
int main(void)
{
	int i;
	long a = 1, b = 2, sum;

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
		printf("%ld, ", a);
		sum = a + b;
		a = b;
		b = sum;
		}
		else
		{
			printf("%ld\n", a);
		}
	}
	return (0);
}
