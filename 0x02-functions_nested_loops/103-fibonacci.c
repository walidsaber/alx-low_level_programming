#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: "sums of even"
 * Return: success 0
 */
int main(void)
{
	int i;

	long a = 1, b = 2, even = 0, sum;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (a <= 4000000)
		{
			if ((a % 2) == 0)
			{
				even = even + a;
			}
		}
	}
	printf("%ld\n", even);
return (0);
}
