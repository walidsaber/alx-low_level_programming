#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * len_str - counts len of a string
 * @n: str
 * Return: Size
 */
int len_str(char *n)
{
	int i = 0;

	if (n == NULL)
		return ('\0');
	while (n[i])
		i++;
	return (i);
}
/**
 * add_node_end - add node at the end of a list
 * @head: head
 * @str: string
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *last_node;

	if (head == NULL || str == NULL)
		return (NULL);
	add_node = (list_t *)malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strdup(str);

	add_node->len = len_str(add_node->str);
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
