#include "main.h"
/**
 * flip_bits - check the code.
 * @n: int(decimal) to check
 * @index: index
 * Return: number of bits to be flipped
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor)
	{
		b += xor & 1;
		xor >>= 1;
	}
	return (b);
}
