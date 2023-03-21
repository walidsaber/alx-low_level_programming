#include <stdio.h>
/**
 * main - Entry point
 * Description: "program to print _putchar"
 * Return: Always 0 (success)
 */
int main(void)
{
	char wd[] = "_putchar\n";

	int i;

	for (i = 0; i < 8; i++)
	{
	putchar(wd[i]);
	}
	putchar('\n');
	return (0);
}
