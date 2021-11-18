#include "main.h"
/**
 * _pow - calculate power.
 * @x: int
 * @y: int (power)
 * Return: x pow y
 *
 */
unsigned int _pow(int x, int y)
{
        unsigned int res = x;
        int i;

        if (y == 0)
                return (1);
        else if (y == 1)
                return (x);
        for (i = 1; i < y; i++)
                res = res * x;
        return (res);
}
/**
 * print_num - check the code
 * @n : char to print
 *
 * Return: none
 */
void print_num(unsigned long int n)
{
	if (n > 0)
	{
		print_num(n / 10);
		_putchar((n % 10) + '0');
	}
}
/**
 * print_binary - check the code
 * @ : char to print
 *
 * Return: 1 allways
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	size_t bin;

	while (n != 0)
	{
		if (n % 2 == 1)
			bin += _pow(10, i);
		n /= 2;
		i++;
	}
	print_num(bin);
}
