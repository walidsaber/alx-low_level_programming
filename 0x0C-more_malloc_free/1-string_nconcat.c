#include "main.h"
#include <stdlib.h>

/**
 * _strlen - length
 * @s: char
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - concacts
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sum;
	unsigned int i, k = 0, size1, size2, max;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sum = malloc(sizeof(char) * (size1 + n + 1));
	if (sum == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
	{
		sum[i] = s1[i];
	}
	if (n >= size2)
	{
		max = size2;
	} else
	{
		max = size1 + n;
	}
	for (i = size1; i < max; i++)
	{
		if (k < n)
		{
			sum[i] = s2[k];
			k++;
		} else
		{
			return (NULL);
		}
	}
	sum[i] = '\0';

	return (sum);
}
