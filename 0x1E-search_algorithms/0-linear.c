#include "search_algos.h"

/**
 * linear_search - searches for value implementing linear search algorithm
 * @array: array
 * @size: array's size
 * @value: searched
 * Return: 1st indx on success and -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);

}
