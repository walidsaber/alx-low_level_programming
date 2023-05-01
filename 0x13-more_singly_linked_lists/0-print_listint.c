#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print list
 * @h: header
 * Return: list, 0 if NULL
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
