#include "main.h"
/**
 * _islower - Entry
 * Description: "checks lowercase"
 * @c: is a character
 * Return: 1 if its lower, else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
