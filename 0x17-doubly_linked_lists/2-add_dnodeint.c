#include "lists.h"

/**
 * add_dnodeint - add new node
 * @head : head
 * @n : value
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addnode;

	addnode = malloc(sizeof(dlistint_t));
	if (addnode == NULL)
		return (NULL);
	if (*head != NULL)
		(*head)->prev = addnode;
	addnode->prev = NULL;
	addnode->n = n;
	addnode->next = *head;
	*head = addnode;
	return (addnode);
}
