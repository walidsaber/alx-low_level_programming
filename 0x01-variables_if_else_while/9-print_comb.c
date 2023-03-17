#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : "Base 16"
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = n + 1; i < 10; i++)
		{
			putchar(n + '0');
			putchar(',');
			putchar(i + '0');
		}
	}
	putchar('\n');
	return (0);
}
