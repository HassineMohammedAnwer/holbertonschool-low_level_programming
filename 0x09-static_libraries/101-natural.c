#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples
* of 3 or 5 below 1024
* Return: Always 0 (Success)
*/
int main(void)
{
int sum = 0;
int i;
for (i = 6; i < 1024 ; i++)
{
if ((i % 5 == 0) || (i % 3 == 0))
sum = sum + i;
}
printf("%d\n", 8 + sum);
return (0);
}
