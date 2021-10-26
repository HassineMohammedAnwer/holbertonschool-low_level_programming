#include "main.h"
#include <stdlib.h>
/**
 * _ strdup - duplicates an array of chars
 *
 * @str: array of chars
 *
 * Return: a pointer to the array on success, NULL if str == NULL.
 */
char *_strdup(char *str)
{
	char *chars;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	chars = malloc(sizeof(char) * (i + 1));
	if (chars == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		*(chars + i) = str[i];
	return (chars);
}
