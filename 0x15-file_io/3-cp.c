#include "main.h"
/**
 * main - check the code
 *@argc: length of argv
 *@argv: array of arguments
 *Return: none
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	read(fd, buffer, 1024);
	return (0);
}
