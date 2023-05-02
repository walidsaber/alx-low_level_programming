#include "lists.h"

/**
 * pop_listint - deleting func
 * @head: head
 * Return: data
 */

int pop_listint(listint_t **head)
{
	listint_t *headcpy;
	int data;

	if (*head == NULL)
		return ('\0');
	headcpy = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(headcpy);
	return (data);
}
