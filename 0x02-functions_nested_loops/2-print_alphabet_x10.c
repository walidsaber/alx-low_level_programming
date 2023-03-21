#include "main.h"
/**
 * print_alphabet - Entry
 * Description: "print alphabet 10 times!"
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int x = 'a';

		int y = 'z';

		while (x <= y)
		{
		_putchar(x);
		x++;
		}
		_putchar('\n');
	}

}
