#include "function_pointers.h"

/**
 * array_iterator - exec
 * @array: arr
 * @size: str
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL)
		return;
	else if (action == NULL)
		return;
	while (size > 0)
	{
		action(*array);
		array++;
		size--;
	}
}
