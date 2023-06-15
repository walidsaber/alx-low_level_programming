#include "lists.h"

/**
 * get_dnodeint_at_index - print head at index
 * @head : head pointer
 * @index : index
 * Return: value at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
}
