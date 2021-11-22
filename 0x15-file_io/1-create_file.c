#include "main.h"
/**
 * create_file - check the code
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t sizwr;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filename == NULL || fd == -1)
		return (0);
	sizwr = write(fd, text_content, strlen(text_content));
	if (sizwr == -1)
		return (-1);
	close(fd);
	return (1);
}
