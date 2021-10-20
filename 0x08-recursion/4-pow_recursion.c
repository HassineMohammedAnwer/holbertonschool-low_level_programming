#include <unistd.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: The number
 * @y: The power
 * Return: the result of x pow by y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || x == 1)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
