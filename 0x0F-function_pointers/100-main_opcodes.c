#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main fuction
 * @argc: size of argv
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, size;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size >= 0)
	{
		arr = (char *)main;
		for (i = 0; i < size; i++)
		{
			if (i == size)
			{
				printf("%02hhx\n", arr[i]);
				break;
			}
			printf("%02hhx", arr[i]);
		}
	}
	else
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
