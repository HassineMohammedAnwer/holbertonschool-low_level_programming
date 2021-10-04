#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints the last digit of the random
* number stored in the variable n
* Return: Always 0 (Success)
* the string and is greater than 5
* the string and is 0
* the string and is less than 6 and not 0
*/
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
