#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - add
 * @argv: argv
 * @argc: counts
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i, len, is_num = 1, k, sum = 0;

	char *ptr;

	for (k = 1; k < argc; k++)
	{
		ptr = argv[k];
		len = strlen(ptr);
		for (i = 0; i < len; i++)
		{
			if (!isdigit(*(ptr)))
			{
				is_num = 0;
				break;
			}
		}
	}
	if (is_num)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}






