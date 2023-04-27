#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next_list;

	while (head != NULL)
	{
		free_list = head->next;
		free(head->str);
		free(head);
		head = next_list;
	}
}
