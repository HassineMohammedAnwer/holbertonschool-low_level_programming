#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 *             followed by a new line, to stdout.
 * @s: entry string declared in main.c
 * Return:	None
**/
void print_rev(char *s)
{
	int x;
	int len = _strlen(s);

	for (x = len - 1; x >= 0; x--)
		putchar(s[x]);
	putchar('\n');
}

/**
 * _strlen - function that returns the length of a string.
 * @s: The string to enter
 *
 * Return: strlen success
**/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
