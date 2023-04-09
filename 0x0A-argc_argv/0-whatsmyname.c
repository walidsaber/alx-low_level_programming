#include "main.h"
#include <stdio.h>

/**
 * main - many args
 * @argc: counts number of args
 * @argv: args entered
 * Return: nn
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");
}
