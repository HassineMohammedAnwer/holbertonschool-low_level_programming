#include <stdio.h>
/**
* main : ojoj
* Return: Always 0 (Success)
*/
int main(void)
{
/**
* sum : ojoj
* i: Always 0 (Success)
*/
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
