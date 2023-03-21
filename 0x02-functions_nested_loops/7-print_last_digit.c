#include "main.h"
/**
 * print_last_digit - Last D
 * Description: "prints the last digit of a givin number"
 * @i: input value
 * Return: i
 */
int print_last_digit(int i)

{

	int result;

	result = i % 10;

if (i < 0)
{
i = result * -1;
}
_putchar(result + '0');
return (result);
}
