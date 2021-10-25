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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}


