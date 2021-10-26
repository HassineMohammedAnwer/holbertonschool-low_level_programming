#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 *
 * @s1: 1st string
 * @s2: 2nd string
 * Return: a pointer to the new string, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *chars;
	unsigned int i = 0, j = 0;
	while (s1[j])
	{
		j++;
	}
	while (s2[i])
	{
		i++;
		j++;
	}
	chars = (char *)malloc(sizeof(char) * j);
	if (chars == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (s1[j])
	{
		chars[j] = s1[j];
		j++;
	}
	while (s2[i])
	{
		chars[j] = s2[i];
		i++;
		j++;
	}
	return (chars);
}
