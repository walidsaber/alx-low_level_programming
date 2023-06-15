#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
