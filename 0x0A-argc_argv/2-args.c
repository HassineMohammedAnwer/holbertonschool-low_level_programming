#include <stdio.h>
/**
 * main - prints the name of the program + new line.
 * @argc : length of argv
 * @argv : array of the command line arguments (strings)
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
