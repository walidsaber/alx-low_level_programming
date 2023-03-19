#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: "4 loops to print us two two-digit numbers comb"
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, a;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
		for (k = 48; k <= 57; k++)
		{
		for (a = 48; a <= 57; a++)
		{
		putchar(i);
		putchar(j);
		putchar(' ');
		putchar(k);
		putchar(a);
		if (i + j == 114 && k + a == 114)
		{
			break;
		}
		else
		{
		putchar(',');
		}
		}
		}
		}
	}
	putchar('\n');
}
