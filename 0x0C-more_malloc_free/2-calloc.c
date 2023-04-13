#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: int
 * @size: size
 * Return: NULL if nmem or size equal to 0.
 * Otherwise - return arr.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i, max;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	c = arr;
	max = size * nmemb;
	for (i = 0; i < max; i++)
		c[i] = '\0';
	return (arr);
}
