#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * f the number of characters is odd,print the last n characters of the string
 * n = (length_of_the_string - 1) / 2
 * @str: entry string declared in main.c
 * Return:	None
**/
void puts_half(char *str)
{
	int len = _strlen(str), i;

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
	for (i = (len / 2) + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
	}
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
