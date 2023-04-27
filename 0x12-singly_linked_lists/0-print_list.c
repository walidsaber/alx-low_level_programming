#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - printing a list
 * @h: next pointer
 * Return: data
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
