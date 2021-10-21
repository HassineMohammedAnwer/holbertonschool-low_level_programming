#include <unistd.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line.
 * @s: The string to print in reverse
 *
 * Return: none.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
