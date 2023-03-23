#include "main.h"

/**
 * _isupper - upper checker
 * Return: 1 if upper, else 0
 * @c: is an input
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
