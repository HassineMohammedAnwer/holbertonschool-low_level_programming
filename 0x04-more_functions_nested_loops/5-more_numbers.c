#include "main.h"
/**
 * more_numbers -  prints the numbers, from 0 to 9 14 times
 *
 * Return: none
 */
void more_numbers(void)
{
int i,j;
for (j = 0; j < 14; j++)
{
for (i = 0; i <= 9; i++)
{
if (i > 9)
_putchar((i /10) + '0');
_putchar((i % 10) + '0');
}
_putchar ('\n');
}
}
