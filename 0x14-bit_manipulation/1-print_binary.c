#include <unistd.h>
#include "main.h"
/**
 * print_binary - check the code
 * @n: decimal to convert
 *
 * Return: none
 */
void print_binary(unsigned long int n)
{
	size_t d = n;

	if (d > 1)
		print_binary(d >> 1);
	_putchar((d & 1) + '0');
/*	printf("%ld", (d & 1));
*/
}
