#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - 2 dim
 * @width: width
 * @height: height
 * Return: dim
 */
int **alloc_grid(int width, int height)
{
	int i, k, **dim;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dim = malloc(sizeof(int) * height);
	for (i = 0; i < height; i++)
	{
		dim[i] = malloc(sizeof(int) * width);
		if (dim[i] == NULL)
		{
			for (i; i >= 0; i--)
			{
				free(dim[i]);
			}
			free(dim);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			dim[i][k] = 0;
		}
	}
	return (dim);
}
