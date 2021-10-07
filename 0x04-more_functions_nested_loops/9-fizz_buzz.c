#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, followed by a new line.
 * But for multiples of three print Fizz instead of the number.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * And for the multiples of five print Buzz.
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
