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
int i,j;
for (i = 48; i < 57; i++)
{
for (j = i+1; j <= 57; j++)
{
putchar(i);
if ((i != j)&&(i != 56))
{
putchar(j);
putchar(44);
putchar(32);
}
else if (i == 56)
{
putchar(j);
}
}
}
putchar('\n');
return (0);
}
