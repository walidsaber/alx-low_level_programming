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
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
