#include "variadic_functions.h"

/**
 * print_all - check the code
 * @format: type of parameter
 * Return: none (void)
 */
void print_all(const char * const format, ...)
{
	va_list x;
	int i = 0;
	char *s, *sch= "";

	va_start(x, format);
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sch, va_arg(x, int));
					break;
				case 'i':
					printf("%s%d", sch, va_arg(x, int));
					break;
				case 'f':
					printf("%s%f", sch, va_arg(x, double));
					break;
				case 's':
					s = va_arg(x, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", sch, s);
					break;
				default:
					i++;
					continue;
			}
			sch = ", ";
			i++;
		}
	}
	va_end(x);
	printf("\n");
}
