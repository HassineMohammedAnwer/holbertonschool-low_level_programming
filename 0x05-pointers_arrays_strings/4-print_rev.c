#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 *             followed by a new line, to stdout.
 * @s: entry string declared in main.c
 * Return:	None
**/

void print_rev(char *s)
{
	int i ;
	i = _strlen(s);

	do
	{
		i--;
		_putchar(s[i]);
	}while (i != 0);
	_putchar('\n');
}
/**	2nd function
 * _strlen - function that returns the length of a string.
 * @s: The string to enter
 *
 * Return: strlen success
 */

int _strlen(char *s)
{
        int i = 0;

        while (s[i] != '\0')
        {
                i++;
        }
        return (i);
}
