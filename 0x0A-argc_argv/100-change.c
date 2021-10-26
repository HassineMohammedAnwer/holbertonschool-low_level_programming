#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int coins = atoi(argv[1]);
	int cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	while (coins > 0)
	{
		if (coins >= 25)
			coins = coins - 25;
		else if (coins >= 10)
			coins = coins - 10;
		else if (coins >= 5)
			coins = coins - 5;
		else if (coins >= 2)
			coins = coins - 2;
		else
			coins = coins - 1;
		cents++;
	}
	printf("%d\n", cents);
	return (0);
}
