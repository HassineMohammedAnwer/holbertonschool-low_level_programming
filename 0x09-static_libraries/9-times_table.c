#include <stdio.h>
#include "main.h"

/**
* times_table - prints the last digit of the random
*/
void times_table(void)
{
int x, y;
for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
if (y == 0)
{
_putchar(y + '0');
}
else if (y * x <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(y * x + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar((y * x) / 10 + '0');
_putchar((y * x) % 10 + '0');
}
}
_putchar('\n');
}
}
