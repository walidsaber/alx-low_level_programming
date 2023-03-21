#include "main.h"
/**
 * jack_bauer - jack
 * Description: "jack bauer day in minutes"
 * Return: void
 */
void jack_bauer(void)
{
int ht, ho, min_t, min_o, h_max;
h_max = 58;
ht = '0';
while (ht < '3')
{
if (ht == '2')
{
h_max = '4';
}
ho = '0';
while (ho < h_max)
{
min_t = '0';
while (min_t < '6')
{
min_o = '0';
while (min_o < 58)
{
_putchar(ht);
_putchar(ho);
_putchar(':');
_putchar(min_t);
_putchar(min_o);
_putchar('\n');
min_o++;
}
min_o = '0';
min_t++;
}
min_t = '0';
ho++;
}
ho = '0';
ht++;
}
}
