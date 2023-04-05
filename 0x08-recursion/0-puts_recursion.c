#include "main.h"

/**
 * _puts_recursion - put rec
 * @s: char
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
        {
            putchar(*s);
            puts(s + 1);
        }
        else
        {
            putchar('\n');
        }
}
