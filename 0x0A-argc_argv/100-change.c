#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change.
 * @argc: length of argv
 * @argv: arguments of the program
 * Return: 0 on success, 1 if argc != 2.
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins;

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (cents >= 5)
			cents = cents - 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		coins++;
	}
	if (cents < 0)
	{
		 printf("0\n");
	}
	else
	{
		printf("%d\n", coins);
		return (0);
	}
}
