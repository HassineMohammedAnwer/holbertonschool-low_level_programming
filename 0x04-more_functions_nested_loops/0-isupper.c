#include <stdio.h>
#include "main.h"

/**
 * _isupper - function to look for upper case
 * @c: The character to test 
 *
 * Return: 1 if upper case found else 1
 */

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);
}
