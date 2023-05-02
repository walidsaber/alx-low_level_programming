#include "lists.h"

/**
 * add_nodeint_end - adding node at end
 * @head: head
 * @n: int
 * Return: NULL if head, otherwise return head,
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node, *last_node;

	if (head == NULL)
		return (NULL);
	add_node = (listint_t *)malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
		*head = add_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = add_node;
	}
	return (*head);
}
