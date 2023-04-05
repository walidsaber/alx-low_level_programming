#include "main.h"

/**
 * sqrt - square root
 * @n: int
 * @r: root srch
 * Return: root
 */
int sqrt(int n, int r);
int sqrt(int n, int r)
{
	if ((r * r) == n)
	{
		return (r);
	}
	else if (r == n / 2)
	{
		return (-1);
	}
	return (sqrt(n, r + 1));
}
/**
 * _sqrt_recursion - root
 * @n: int
 * Return: lp
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (sqrt(n, r));
}
