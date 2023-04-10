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
	int i, len, is_num = 0, k, sum = 0;

	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
	} else
	{
		for (k = 1; k < argc; k++)
		{
			ptr = argv[k];
			printf("%s len is :", ptr);
			len = strlen(ptr);
			printf("%d\n", len);
			for (i = 0; i < len; i++)
			{
				if (isdigit(*(ptr + i)) == 0)
				{
					is_num = 1;
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
			return (1);
		}
	}
	return (0);
}
