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

	va_start(x, n);
	if (separator == NULL)
		printf("(nil)");
	else
	{
		for (i = 0; i < n; i++)
		{
			if (!separator)
				printf("%s", va_arg(x, char *));
			else if (separator && i == 0)
				printf("%s", va_arg(x, char *));
			else
				printf("%s%s", separator, va_arg(x, char *));
		}
	}
	va_end(x);
	printf("\n");
}
