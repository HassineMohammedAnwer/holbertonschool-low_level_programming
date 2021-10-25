#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies positive numbers.
 * @argc : length of argv
 * @argv : array of the command line arguments (strings)
 * Return: 0 on success 1 if not two numbers are passed.
 */
int main(int argc, char *argv[])
{
	int i, digit;
	unsigned int x;

	digit = 0;
	x = atoi(argv[0]);
	i = 1;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		while (argv[i][digit])
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		digit++;
		}
		x = x + atoi(argv[i]);
		i++;
	}
	printf("%d\n", x);
	return (0);

}
