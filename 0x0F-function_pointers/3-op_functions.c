#include "3-calc.h"

/**
 * op_add - returns  the sum of a and b
 * @a: the integer
 * @b: the second integer
 * Return:  the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns  the difference of a and b
 * @a: the integer
 * @b: the second integer
 * Return:  the difference between a and b.
 */
int op_sub(int a, int b)
{
	if (a > b)
		return (a - b);
	else
		return (b - a);
}
/**
 * op_mul - returns  the difference of a and b
 * @a: the integer
 * @b: the second integer
 * Return:  the difference between a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns  the difference of a and b
 * @a: the integer
 * @b: the second integer
 * Return:  the difference between a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
		return (a / b);
}
/**
 * op_mod - returns  the difference of a and b
 * @a: the integer
 * @b: the second integer
 * Return:  the difference between a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
