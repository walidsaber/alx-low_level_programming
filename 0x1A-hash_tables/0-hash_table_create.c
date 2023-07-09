#include "hash_tables.h"

/**
 * hash_table_create - launch
 * @size: size num
 * Return: htabl
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int it = 0;
	hash_table_t *htabl = malloc(sizeof(hash_table_t));

	if (htabl == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	htabl->array = malloc(sizeof(hash_node_t *) * size + 1);

	if (htabl->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	htabl->size = size;

	for (; it < size; it++)
		htabl->array[it] = NULL;

	return (htabl);
}
