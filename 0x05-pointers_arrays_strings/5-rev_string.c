#include "main.h"

/**
 * rev_string - reverse
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, count = 0, l = -1;

	while (s[i])
	{
		i++;
		count++;
		l++;
	}
	count /= 2;
	for (i = 0; i < count; i++)
	{
		char temp = s[i];

		s[i] = s[l];
		s[l] = temp;
		l--;
	}
}
