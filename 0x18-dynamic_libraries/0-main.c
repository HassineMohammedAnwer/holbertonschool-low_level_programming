#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return (0);
}
/**
 * _strlen - check the code
 * @s: string
 * Return: len.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s)
	{
		i++;
		s++;
	}
	return (i);
}
