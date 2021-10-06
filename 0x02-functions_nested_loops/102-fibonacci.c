#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples
* of 3 or 5 below 1024
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
int sum = 0;
int a = 1;
int b = 2;
printf("1, 2, ");
for (i = 0; i < 48; i ++)
{
sum = a + b;
a = b;
b = sum;
printf("%d, ", sum);
}
printf("\n");
return (0);
}
