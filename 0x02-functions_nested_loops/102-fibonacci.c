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
	long a = 0; b = 1; sum;

	for (i = 0; i <= 50; i++)
	{
		printf("%ld ,", a);
		sum = a + b;
		a = b;
		b = sum;
	}
	return (0);
}
