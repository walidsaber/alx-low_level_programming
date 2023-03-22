#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * Description: "prints the sum of all multiples by 3 & 5"
 * Return: always 0 (success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

