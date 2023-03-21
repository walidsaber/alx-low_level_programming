#include "main.h"
/**
 * print_sign - checker
 * Description: "Checks if the value given is + or - or 0"
 * @n: n is an input
 * Return: 1 if positive,-1 if negative, 0 if is null
 */
int print_sign(int n)
{
	if (n > 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	return (0);
	}
}
