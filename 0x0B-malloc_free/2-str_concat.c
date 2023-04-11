#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concats
 * @s1: first str
 * @s2: second str
 * Return: sum of strings
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, counts1 = 0, counts2 = 0, mem;

	char *sum;

	while(s1[i] != '\0')
	{
		counts1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		counts2++;
		i++;
	}
	mem = counts2 + counts1;
	sum = malloc(sizeof (char) * mem);
	for (i = 0; i <= counts1; i++)
	{
		sum[i] = s1[i];
	}
	for (i = 0; i <= counts2; i++)
	{
		sum[counts1] = s2[i];
		counts1++;
	}

	return (sum);

}
