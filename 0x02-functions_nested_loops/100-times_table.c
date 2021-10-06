#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints the last digit of the random
* @n : entry integer
*/
void print_times_table(int n)
{
int x, y;
if ((n >= 0) && (n <= 15))
{
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
if (y == 0)
{
printf("0");
continue ;
}
if ((y * x) < 10)
printf(",   ");
else if ((y * x) < 100)
printf(",  ");
else
printf(", ");
printf("%d", y * x);
}
printf("\n");
}
}
}
