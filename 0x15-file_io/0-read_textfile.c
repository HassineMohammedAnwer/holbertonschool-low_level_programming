#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	fd = open(filename, O_RDONLY, 0600);
	if (filename == NULL || fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	
	return (write(1, buffer, read(fd, buffer, letters) + 1));
}
