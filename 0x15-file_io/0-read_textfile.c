#include "main.h"
/**
 * read_textfile - check the code
 * @filename: file name
 * @letters: number of letters
 * Return: size of output
 */

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
	sizrd = read(fd, buffer, letters);
/**	if (sizrd == -1)
 *		return (0);
 */
	return (write(1, buffer, read(fd, buffer, letters + '\0')));
}
