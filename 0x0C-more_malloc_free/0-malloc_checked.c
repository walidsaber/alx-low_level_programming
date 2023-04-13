#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - mall check
 * @b: int
 * Return: mem
 */

void *malloc_checked(unsigned int b)
{
	void *mall;

	mall = malloc(b);
	if (mall == NULL)
	{
		exit(98);
	}
	return (mem);
}

