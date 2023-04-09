#include "main.h"

/**
 * _isdigit - checker
 * Description: "checks for a digit"
 * @c: is an input
 * Return: 1 if its a digit,otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
