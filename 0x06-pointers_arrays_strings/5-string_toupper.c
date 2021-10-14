#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @char: first entry string
 * Return: same string in uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
