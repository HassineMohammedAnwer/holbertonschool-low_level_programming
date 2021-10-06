#include <stdio.h>
/**
* main : ojoj
* Return: Always 0 (Success)
* the string and is greater than 5
* the string and is 0
* the string and is less than 6 and not 0
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
printf("%d \n", 8+sum);
return (0);
}
