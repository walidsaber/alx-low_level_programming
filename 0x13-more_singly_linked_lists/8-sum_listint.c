#include "lists.h"

/**
 * sum_listint - sum of the list
 * @head: head
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
