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
int i, j, k;
for (i = 48; i < 56; i++)
{
for (j = i + 1; j <= 56; j++)
{
for (k = j + 1; k <= 57; k++)
{
putchar(i);
if ((i != j) && (i != k))
{
putchar(j);
putchar(k);
}
if (i != 55)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
