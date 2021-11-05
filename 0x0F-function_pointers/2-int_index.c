#include "function_pointers.h"

/**
 * int_index - prints a name as is
 * @array: parameter
 * @size: long unsigned int
 * @cmp: pointer to a function
 * Return: i or -1 if failure.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}


