#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - 2 dim
 * @width: width
 * @height: height
 * Return: dim
 */

int **alloc_grid(int width, int height)
{
	int i, k;

	int **dim;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dim = malloc(sizeof(int *) * height);
	if (dim == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dim[i] = (int *) malloc(sizeof(int) * width);

		if (dim[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(dim[k]);
			}
			free(dim);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			dim[i][k] = 0;
		}
	}
	return (dim);
}
