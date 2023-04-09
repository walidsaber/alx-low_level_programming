#include "main.h"
/**
 * _isalpha - alph checker
 * Description: "checks if its an alphabetic char or not"
 * @c: c is a testing character
 * Return: 1 if its a letter, otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
