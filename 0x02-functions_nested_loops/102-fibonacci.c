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
	long a = 0, b = 1, sum;

	for (i = 1; i <= 51; i++)
	{
		if ( i != 51){
		printf("%ld, ", a);
		sum = a + b;
		a = b;
		b = sum;
		}
		else
		{
			printf("%ld", a);
		}
	}
	return (0);
}
