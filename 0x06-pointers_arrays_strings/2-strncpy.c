#include "main.h"
#include <stdio.h>

/**
 * _strncpy - a function that copies a string.
 * it will use at most n bytes from src
 * @dest: first entry string
 * @src: second entry string
 * @n: third entry integer
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		i++;
		dest[i] =src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
