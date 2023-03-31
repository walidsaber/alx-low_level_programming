#include "main.h"

/**
 * *_strncat - conca two string
 * @dest: dest
 * @src: src
 * @n: bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i])
	{
		i++;
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len++] = src[i];
	}
	return (dest);
}
