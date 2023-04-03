#include "main.h"

/**
 * *_memset - memsetf
 * @s: char
 * @b: char
 * @n: int
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
}
