#include <stdio.h>

/**
 * main - prints the name of the program + new line.
 * @argc: length of argv
 * @argv: array of the command line arguments (strings)
 * Return: argc (cause gcc wont work if argc not used.
 */
int main(int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	return (argc);
}
