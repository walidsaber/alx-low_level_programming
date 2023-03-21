#include "main.h"
/**
 * print_last_digit - Last D
 * Description: "prints the last digit of a givin number"
 * @i: input value
 * Return: i
 */
int print_last_digit(int i)

{
i = i % 10;
if (i < 0)
{
i = i * -1;
}
_putchar(i + '0');
return (i);
}
