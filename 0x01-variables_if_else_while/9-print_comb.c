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
int i = 48;
while (i <= 57)
{
putchar(i);
if (i != 57)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}
