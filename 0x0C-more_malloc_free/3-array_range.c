#include "main.h"
#include <stdlib.h>

/**
 * array_range - arr
 * @min: minimum
 * @max: maximum
 * Return: NULL if min > max,
 * otherwise return arr
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min;
	arr = malloc(sizeof(int) * (size + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (size + 1); i++)
		arr[i] = min++;
	return (arr);
}
