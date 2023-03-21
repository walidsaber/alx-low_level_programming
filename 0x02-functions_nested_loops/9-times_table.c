#include "main.h"
/**
 * times_table - table
 * Description: "prints the 9 times table"
 * Return: void
 */
void times_table(void)
{
int r, c, drb, t, o;

for (r = 0; r <= 9; r++)
{
for (c = 0; c <= 9; c++)
{
drb = r * c;
t = drb / 10;
o = drb % 10;

if (c == 0)
{
_putchar('0');
}
else if (drb < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(o + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(t + '0');
_putchar(o + '0');
}
}
_putchar('\n');
}
}
