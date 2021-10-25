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
	int i;
	unsigned int x;

	x = 1;
	i = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		while (i < argc)
		{
			x = x * atoi(argv[i]);
			i++;
		}
		printf("%d\n", x);
		return (0);
	}
}
