#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: The character to test
 * @b: the other entry to swap with
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
