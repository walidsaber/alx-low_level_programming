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
	int *arr, i, k = 0, x;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	arr = malloc(sizeof(int) * i);
	if (arr == NULL)
		return (NULL);
	x = min;
	for (i = min; i <= max; i++)
	{
		arr[k] = x;
		x++;
		k++;
	}
	return (arr);
}
