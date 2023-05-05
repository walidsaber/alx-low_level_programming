#include "main.h"

/**
 * get_endianness - get end
 * Return: if big - 0, if little - 1.
 */
int get_endianness(void)
{
	size_t k = 1;
	char *cr = (char *)&k;

	if (*cr == 1)
		return (1);
	return (0);
}
