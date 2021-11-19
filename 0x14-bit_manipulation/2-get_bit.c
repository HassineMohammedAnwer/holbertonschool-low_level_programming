#include "main.h"
/**
 * f_num - function return length of int and writes it.
 * @x: int
 *
 * Return: counter
 *
 */
unsigned int f_num(size_t u)
{
	unsigned int d = 0;

	if (u == 0)
		return (1);
	while (u != 0)
	{
		u /= 2;
		d++;
	}
	return (d);
}
/**
 * get_bit - check the code.
 * @n: int(decimal) to check
 * @index: index
 * Return: value of bit at index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	unsigned int d;

	d = f_num(n);
	if (index > 63)
		return (-1);
	if (index > d)
		return (0);
	b = n >> index;
	return(b & 1);
}
