#include "main.h"
#include <stdio.h>

/**
 * main - multiplication
 * @argc: count
 * @argv: args
 * Return: success
 */

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		reulst = a * b;
		printf("%d\n", result);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
