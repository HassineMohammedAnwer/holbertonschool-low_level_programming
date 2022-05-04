#include "search_algos.h"

/**
 * binary_search - implement  binary search  algorithm
 * @array: array
 * @size: array'ssize
 * @value: to be searched
 * Return: 1st index on success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t f = 0;
	size_t l = 0;
	size_t m = 0;

	if (array == NULL || size == 0)
		return (-1);

	l = size - 1;

	while (f <= l)
	{
		printf("Searching in array: ");
		for (i = f; i < l; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = (f + l) / 2;
		if (array[m] > value)
			l = m - 1;
		else if (array[m] < value)
			f = m + 1;
		else
			return (m);
	}
	return (-1);
}
