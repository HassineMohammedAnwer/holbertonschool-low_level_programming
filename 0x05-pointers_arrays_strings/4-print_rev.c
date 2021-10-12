#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 *             followed by a new line, to stdout.
 * @s: entry string declared in main.c
 * Return:	None
**/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	do
	{
		_putchar(s[i]);
		i --;
	}while (i != 0);
	_putchar('\n');
}
