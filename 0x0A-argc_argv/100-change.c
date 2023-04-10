#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - change
 * @argc: counts
 * @argv: args
 * Return: 0 if success, 1 if fail
 */

int main(int argc, char *argv[])
{
	int num, count = 0;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		while (num != 0)
		{
			if (num >= 25)
			{
				num = num - 25;
				count++;
			}
			else if (num >= 10)
			{
				num = num - 10;
				count++;
			}
			else if (num >= 5)
			{
				num = num - 5;
				count++;
			}
			else if (num >= 2)
			{
				num = num - 2;
				count++;
			}
			else
			{
				num = num - 1;
				count++;
			}
		}
		printf("%d\n", count);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
