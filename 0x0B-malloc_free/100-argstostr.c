#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - argstor
 * @ac: argc
 * @av: argv
 * Return: dim
 */

char *argstostr(int ac, char **av)
{
	char *str;

	int i, k, l, size = ac;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l]; l++)
			size++;
	}
	size++;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			str[i] = av[k][l];
			i++;
		}
		str[i] = '\n';
		i++;
	}
	str[size] = '\0';

	return (str);
}
