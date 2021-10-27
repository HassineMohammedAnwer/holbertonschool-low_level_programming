#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples
* of 3 or 5 below 1024
* Return: Always 0 (Success)
*/
int main(void)
{
long int smeven = 2;
int i;
long int sum = 0;
long int a = 1;
long int b = 2;
for (i = 0; i < 48; i++)
{
sum = a + b;
a = b;
b = sum;
if (sum > 4000000)
break;
if (sum % 2 == 0)
smeven = smeven + sum;
}
printf("%ld\n", smeven);
return (0);
}
