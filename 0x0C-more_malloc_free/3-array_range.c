#include "main.h"

/**
 * *array_range - a function that creates an array of integers.
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
