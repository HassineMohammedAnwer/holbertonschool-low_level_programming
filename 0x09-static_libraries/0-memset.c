#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: the first n bytes of the memory area to be filled
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
