#include "main.h"
/**
 * jack_bauer - jack
 * Description: "jack bauer day in minutes"
 * Return: void
 */
void jack_bauer(void)
{
int i, j;

for (i = 0; i < 24; i++)
{
for (j = 0; j <= 59; j++)
{
if (i <= 9)
{
if (j <= 9)
{
_putchar('0');
_putchar('0' + i);
_putchar(':');
_putchar('0');
_putchar('0' + j);
}
else
{
_putchar('0');
_putchar('0' + i);
_putchar(':');
_putchar('0' + j);
}
}
else
{
if (j <= 9)
{
_putchar('0' + i);
_putchar(':');
_putchar('0');
_putchar('0' + j);
}
else
{
_putchar('0' + i);
_putchar(':');
_putchar('0' + j);
}
}
}
}
}
