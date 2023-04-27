#include "lists.h"

/**
 * list_len - print the number of elements within a list
 * @h: pointer
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
