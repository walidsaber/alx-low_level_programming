#include "lists.h"

/**
 * dlistint_len - print len of a list
 * @h: pointer
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
