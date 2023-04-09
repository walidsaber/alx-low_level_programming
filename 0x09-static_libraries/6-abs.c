#include "main.h"
/**
 * _abs - absolutly
 * Description: "prints the absolute value"
 * @i: is an input that will be checked
 * Return: i
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = (i * -1);
	}
	return (i);
}
