#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adding node
 * @head: head
 * @str: string
 * Return: add_node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *strcpy;
	list_t *add_node;

	strcpy = strdup(str);
	if (head == NULL || str == NULL)
		return (NULL);
	add_node = (list_t *)malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strcpy;
	if (add_node->str == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
