#include "main.h"

/**
 * *malloc_checked -  allocates memory using malloc.
 * @b: number of space cases
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int **x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
