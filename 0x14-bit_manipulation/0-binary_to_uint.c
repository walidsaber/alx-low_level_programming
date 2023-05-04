#include "main.h"

/**
 * binary_to_uint - converter
 * @b: binary num
 * Return: 0 if there is one or more chars in b, else return 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k, multi = 1, sum = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (b[i] != 49 && b[i] != 48)
			return (0);
		i++;
	}
	for (k = i - 1; k >= 0; k--)
	{
		if (b[k] - '0' == 1)
			sum += multi;
		multi *= 2;
	}
	return (sum);
}
