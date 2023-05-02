#include "lists.h"

/**
 * free_listint - free list
 * @head: head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *headcpy;

	if (head == NULL)
		return;
	while (head)
	{
		headcpy = head->next;
		free(head);
		head = headcpy;
	}
}
