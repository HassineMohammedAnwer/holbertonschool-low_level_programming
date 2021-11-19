#include <stdio.h>

/**
 *print_binary - takes an int and prints a binary representation
 * @n: int being printed
 *
 * Return: converts a binary number given as a string to an unsigned int
 */
int main()
{
	unsigned long int swap = 98;
/*using bitwise to get to one digit and recursion to move forward*/
	printf("%ld\n", swap >> 1);
	putchar((swap | 1) + '0');
	printf("\n");
	return(0);
}

