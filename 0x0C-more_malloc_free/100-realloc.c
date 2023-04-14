#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - realloc func
 * @ptr: void
 * @old_size: old by
 * @new_size: new by
 * Return: ptr if new == old, 0 if new_s == 0 and ptr != NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr2, *data;
	void *sum;

	if (new_size == old_size)
	{
		return (ptr);
	} else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		sum = malloc(new_size);
		if (sum == NULL)
			return (NULL);
		return (sum);
	}

	ptr2 = ptr;
	sum = malloc(sizeof(ptr2) * new_size);
	if (sum == NULL)
	{
		free(ptr);
		return (NULL);
	}
	data = sum;
	for (i = 0; i < old_size && i < new_size; i++)
		data[i] = *ptr2++;
	free(ptr);
	return (sum);
}
