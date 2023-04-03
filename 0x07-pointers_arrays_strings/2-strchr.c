#include "main.h"

/**
 * *_strchr - locate
 * @s: char
 * @c: char
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return ('\0');
}

