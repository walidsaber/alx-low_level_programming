#include "main.h"

/**
 * *_memset - constant var
 * @s: char
 * @b: char
 * @n: int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
