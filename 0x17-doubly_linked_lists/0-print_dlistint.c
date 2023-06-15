#include "lists.h"


/**
 * print_dlistint - print elements within a list
 * @h: const
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
