#include "main.h"

/**
 * _isdigit - checker
 * Description: "checks for a digit"
 * @c: is an input
 * Return: 1 if its a digit,otherwise 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
