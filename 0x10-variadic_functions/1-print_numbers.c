#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @seperator: the string to be printed between numbers
 * @n: number of parameters
 * Return: none (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);
	for (i = 0; i <n; i++)
	{
		if (i != 0)
			printf("%s%d", separator, va_arg(x, int));
		else
			printf("%d", va_arg(x, int));
	}
	va_end(x);
	printf("\n");
}
