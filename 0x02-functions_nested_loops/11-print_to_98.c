#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints to 98
* @n : entry
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d", i);
}
printf("\n");
}
else
{
for (i = n; i >= 98; i--)
{
if (i != 98)
printf("%d, ", i);
else
printf("%d", i);
}
printf("\n");
}
}
