#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - cpy
 * @str: string
 * @Return: cpy
 */

char *_strdup(char *str)
{
	int i = 0, c = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		c++;
		i++;
	}
	char *cpy;

	cpy = malloc(sizeof(char) * c);
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c; i++)
	{
		cpy[i] = str[i];
	}
	return (cpy);
}
