#include "function_pointers.h"

/**
 * int_index - search
 * @array: arr
 * @size: size
 * @cmp: comparison
 * Return: -1 if fail, else result
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
