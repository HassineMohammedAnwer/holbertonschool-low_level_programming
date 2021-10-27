#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a : integer 1st entry
 * @n :2nd entry number elements of array
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i, j, p;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[j];
		a[j--] = p;
	}
}
