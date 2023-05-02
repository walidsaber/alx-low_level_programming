#include "lists.h"

/**
 * free_listint2 - free lists
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *headcpy;

	if (head == NULL)
		return;
	while (*head)
	{
		headcpy = (*head)->next;
		free(*head);
		*head = headcpy;
	}
	head = (NULL);
}
