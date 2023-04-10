#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

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
		if (num >= 0)
		{
			while (num != 0)
			{
				if (num >= 25)
				{
					num -= 25;
				} else if (num >= 10)
				{
					num -= 10;
				} else if (num >= 5)
				{
					num -= 5;
				} else if (num >= 2)
				{
					num -= 2;
				} else
				{
					num -= 1;
				}
				count++;
			}
			printf("%d\n", count);
		} else
		{
			printf("0\n");
			return (1);
		}
	} else
	{
		printf("Error\n");
	}
	return (0);
}
