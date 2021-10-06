#include <stdio.h>
#include "main.h"

/**
* print_times_table - prints the last digit of the random
* @n : entry integer
*/
void print_times_table(int n)
{
int x, y;
for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
if (y == 0)
{
  printf("%d", y);
}
else if (y * x <= n)
{
printf(",  %d", y * x);
}
else
{
printf(", %d%d", (y * x) % 10, (y * x) / 10);
}
}
printf("\n");
}
}
