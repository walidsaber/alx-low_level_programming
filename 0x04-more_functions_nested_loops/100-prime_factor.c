#include <stdio.h>

/**
 * main - entry
 * Description: "prints the largest prime factor"
 * Return: success 0
 */

int main(void)
{
	long n = 612852475143, div = 2, larg_prim = 0;

	while (n != 1)
	{
		if (n % div == 0)
		{
			n = n / div;
			larg_prim = div;
		}
		div += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}

