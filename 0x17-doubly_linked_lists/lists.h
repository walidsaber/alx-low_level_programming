#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>
/**
 * struct dlistint_s - linked list
 * @n: int
 * @prev: pointer to prev
 * @next: pointer to next
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);
#endif
