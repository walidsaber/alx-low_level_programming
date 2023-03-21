#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - counting
 * Description: "prints all natural number from n to 98"
 * @n: is the user input
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
else
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d\n", i);
}
}
}
}
