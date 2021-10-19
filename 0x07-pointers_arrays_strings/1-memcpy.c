#include "main.h"
#include <stdio.h>

/**
 * __memcpy - a function that copies memory area.
 * @src: memory area
 * @dest: memory area destination
 * @n: the n bytes of the memory area to be copied
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
