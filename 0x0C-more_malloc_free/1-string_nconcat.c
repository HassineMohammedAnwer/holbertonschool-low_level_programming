#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first input
 * @s2: second input
 * @n: the n first bytes
 * Return: s1 + s2 or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		*(s + i) = *(s1 + i);
	}
	if (n >= len2)
	{
		for (j = 0; j <= len2; j++)
		{
			*(s + (i - 1) + j) = *(s2 + j);
		}
		*(s + (i - 1) + j) = '\0';
	}
	else
	{
		for (j = 0; j <= n; j++)
		{
			*(s + (i - 1) + j) = *(s2 + j);
		}
		*(s + (i - 1) + j) = '\0';
	}
	return (s);
}
