#include <stdio.h>
#include "main.h"

/**
* int print_last_digit(int) - prints the last digit of the random
* @n : character
* Return: Always 0 (Success)
* the string and is greater than 5
* the string and is 0
* the string and is less than 6 and not 0
*/
int print_last_digit(int n)
{
int x;
if (n < 0)
{
x = (-1 * (n % 10));
_putchar (x + '0');
return (x);
}
else
{
x = (n % 10);
_putchar (x + '0');
return (x);
}
}
