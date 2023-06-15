#include "lists.h"

/**
 * add_dnodeint_end - adding node at the end
 * @head : head dpointer
 * @n : value
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newlastnode, *final_node;

	newlastnode = malloc(sizeof(dlistint_t));
	if (newlastnode == NULL)
		return (NULL);
	newlastnode->n = n;
	newlastnode->next = NULL;
	if (*head == NULL)
	{
		newlastnode->prev = NULL;
		*head = newlastnode;
		return (newlastnode);
	}
	final_node = *head;
	while (final_node->next != NULL)
		final_node = final_node->next;
	final_node->next = newlastnode;
	newlastnode->prev = final_node;
	return (newlastnode);
}
