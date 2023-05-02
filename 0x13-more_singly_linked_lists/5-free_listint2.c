#include "lists.h"

/**
 * free_listint2 - free lists
 * @head: head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (head)
	{
		listint_t *headcpy;

		headcpy = (*head)->next;
		free(*head);
		*head = headcpy;
	}
	head = (NULL);
}
