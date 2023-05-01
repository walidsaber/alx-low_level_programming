#include "lists.h"

/**
 * add_nodeint - add node int
 * @head: head
 * @n: int
 * Return: Null if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;
	size_t num;

	num = n;
	add_node = (listint_t *)malloc(sizeof(listint_t));
	add_node->n = num;
	if (add_node == NULL)
		return (NULL);
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
