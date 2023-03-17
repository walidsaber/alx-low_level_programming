#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : "checking last num"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int an;

	for (an = 0; an < 10; an++)
	{
		printf("%d", an);
		an++;
	}
	printf("\n");
	return (0);
}
