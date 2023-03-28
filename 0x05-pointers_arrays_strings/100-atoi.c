#include "main.h"
#include <stdio.h>

/**
 * _atoi - ascii to int
 * @s: input
 * Return: result
 */

int _atoi(char *s)
{
	int i = 0, sign = 1;

	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign = -1;
		}
		else if (s[i] == '+')
		{
			sign = 1;
		}
		if ((s[i] <= '9') && (s[i] >= '0'))
		{
			num = (num * 10) + (s[i] - '0');
		}
		else if (num > 0)
		{
			break;
		}
		i++;
	}
	return (num * sign);
}
