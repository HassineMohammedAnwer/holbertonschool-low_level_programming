#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments .
 * @av: array of pointers.
 *
 * Return: null: ac == 0, av == NULL, or the function fails.
 *         On success - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int x, j, i, y = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j]; j++)
			y++;
	}

	s = malloc(sizeof(char) * y + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	for (x = 0; x < ac; x++)
	{
		for (j = 0; av[x][j]; j++)
			s[i++] = av[x][j];

		s[i++] = '\n';
	}

	s[y] = '\0';

	return (s);
}
