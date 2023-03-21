#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - counting
 * Description: "prints all natural number from n to 98"
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
int i;

for (i = n; i <= 98; i++)
{
if ( i != 98)
{
printf("%d, ",i);
}
else
{
printf("%d\n",i);
}
}
}
