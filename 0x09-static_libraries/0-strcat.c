#include "main.h"

/**
 * *_strcat - add
 * @dest: destination
 * @src: source
 * Return: results
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, lnt = 0;

	while (dest[i])
	{
		lnt++;
		i++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[lnt++] = src[i];
	}
	return (dest);
}
