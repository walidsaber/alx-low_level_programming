#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : "A to Z lower to upper"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
