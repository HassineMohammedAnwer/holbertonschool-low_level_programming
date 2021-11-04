#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: the string to be printed between numbers
 * @n: number of parameters
 * Return: none (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *s;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(x, char *);
		if (s == NULL)
			printf("(nil)");
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	va_end(x);
	printf("\n");
}
