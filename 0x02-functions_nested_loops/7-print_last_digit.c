#include "main.h"
/**
 * print_last_digit - Last D
 * Description: "prints the last digit of a givin number"
 * @i: input value
 * Return: i
 */
int print_last_digit(int i)
{
if (i < 0)
{
i = (i * -1);
}
i = i % 10;
_putchar('0' + i);
return (i);
}
