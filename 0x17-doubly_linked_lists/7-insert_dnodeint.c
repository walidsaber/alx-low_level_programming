#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at index
 * @h : double pointer
 * @idx : at index
 * @n : value
 * Return: newd
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnd, *head;
	size_t count = 0;

	head = *h;
	newnd = malloc(sizeof(dlistint_t));
	if (newnd == NULL)
		return (NULL);
	newnd->n = n;
	newnd->prev = NULL;
	newnd->next = NULL;
	if (idx == 0)
	{
		if (head != NULL)
		{
			newnd->next = head;
			head->prev = newnd;
		}
		*h = newnd;
		return (newnd);
	}
	while (count < idx - 1 && head != NULL)
	{
		head = head->next;
		count++;
	}
	if (head == NULL)
	{
		free(newnd);
		return (NULL);
	}
	newnd->next = head->next;
	if (head->next != NULL)
		head->next->prev = newnd;
	head->next = newnd;
	newnd->prev = head;
	return (newnd);
}
