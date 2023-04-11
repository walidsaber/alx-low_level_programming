#include <stdlib.h>
#include "main.h"

/**
 * _strdup - cpy
 * @str: string
 * Return: the value cpy if success, - NULL if null
 */

char *_strdup(char *str)
{
	int i = 0, c = 0;

	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		c++;
		i++;
	}
	cpy = malloc(sizeof(char) * (c + 1));
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
