#include "lists.h"

/**
 * free_listint - free list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free(head->n);
	free(head);
}
