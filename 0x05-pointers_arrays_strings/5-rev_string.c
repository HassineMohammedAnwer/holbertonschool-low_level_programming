#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: entry string declared in main.c
 * Return:	None
**/
void rev_string(char *s)
{
	int len = _strlen(s), i = 0;
	char ch;

	for (i = len - 1; i >= len / 2; i--)
	{
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = ch;
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
