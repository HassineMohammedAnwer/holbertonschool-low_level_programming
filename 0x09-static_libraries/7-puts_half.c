#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *             , followed by a new line, ..same order
 * @n: is the number of elements of the array to be printed
 * @a: entry integer declared in main.c
 * Return:	None
**/
void print_array(int *a, int n)
{
	int  i;

	for (i = 0; i < n; i++)
		printf("%i", a[i]);
	printf("\n");
}
