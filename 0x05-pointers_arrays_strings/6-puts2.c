#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character, followed by a new line.
 * @str: entry string declared in main.c
 * Return:	None
**/
void puts2(char *str)
{
	int len = _strlen(str), i;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
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
