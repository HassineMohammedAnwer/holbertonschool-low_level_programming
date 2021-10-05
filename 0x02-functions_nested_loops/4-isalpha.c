#include <stdio.h>
#include "main.h"

/**
* _isalpha - prints the last digit of the random
* @c : character
* Return: Always 0 (Success)
* the string and is greater than 5
* the string and is 0
* the string and is less than 6 and not 0
*/
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
