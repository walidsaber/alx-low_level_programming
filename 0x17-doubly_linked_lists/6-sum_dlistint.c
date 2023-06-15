#include "lists.h"

/**
 * sum_dlistint - some of values
 * @head : head pointer
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
