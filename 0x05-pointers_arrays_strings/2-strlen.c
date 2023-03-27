#include "main.h"

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
