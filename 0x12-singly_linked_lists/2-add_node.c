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
 * add_node - adding node
 * @head: head
 * @str: string
 * Return: add_node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	if (head == NULL || str == NULL)
		return (NULL);
	add_node = (list_t *)malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	add_node->str = strdup(str);

	add_node->len = len_str(add_node->str);
	if (add_node->str == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
