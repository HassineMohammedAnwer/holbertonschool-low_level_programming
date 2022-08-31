#include "search_algos.h"
#include <math.h>

/**
 * jump_search - implement  jump search  algorithm
 * @array: array
 * @size: array's size
 * @value: to be searched
 * Return: 1st index on success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l = 0, i, sq = sqrt(size), r = sq;

	if (array == NULL || size == 0)
		return (-1);
	while(l < size)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[r] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, r);
			for (i = l; i <= r; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		r += sq;
		l += sq;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l - sq, r - sq);
	printf("Value checked array[%ld] = [%d]\n", l - sq, array[l - sq]);
	return (-1);
}
