#include "main.h"
#include <stdio.h>

/**
 * main - prints args
 * @argc: count
 * @argv: holds
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
