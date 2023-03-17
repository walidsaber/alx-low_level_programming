#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description : "a to z except some of "
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
		{
		putchar(n);
		}
		}
	putchar('\n');
	return (0);
}
