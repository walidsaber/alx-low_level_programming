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
	char *sum = s1;
	unsigned int i = 0, k = 0, size1 = 0, size2 = 0;

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	sum = malloc(size1 + size2 + 1);

	for (i = 0; i < size1; i++)
	{
		sum[i] = s1[i];
	}
	n = size1 + n;
	for (i = size1; i < n; i++)
	{
		sum[i] = s2[k];
		k++;
	}
	return (sum);
}
