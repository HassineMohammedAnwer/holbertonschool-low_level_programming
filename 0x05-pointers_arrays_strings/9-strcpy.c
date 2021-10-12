#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @src: entry string declared in main.c
 * @dest: pointer to buffer
 * Return:	the pointer to dest
**/
char *_strcpy(char *dest, char *src)
{
	int len = _strlen(src), i;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return(dest);
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
