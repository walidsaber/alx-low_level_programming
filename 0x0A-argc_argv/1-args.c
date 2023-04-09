#include "main.h"
#include <stdio.h>

/**
 * main - counts argc
 * @argc: count
 * @argv: args ent
 * Return: success
 */

int main(int argc, char *argv[])
{
	while (*argv)
	{
		argv++;
	}

	printf("%d\n", argc - 1);
	return (0);
}
