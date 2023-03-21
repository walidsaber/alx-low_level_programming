#include "main.h"
/**
 * add - calculation
 * Description: "adds two integers together"
 * @y: value2
 * @x: value1
 * Return: results
 */
int add(int x, int y)
{
int result;

result = x + y;
if (result < 10)
{
_putchar('0' + result);
}
else
{
_putchar('0' + result / 10);
_putchar('0' + result % 10);
}
return (void);
