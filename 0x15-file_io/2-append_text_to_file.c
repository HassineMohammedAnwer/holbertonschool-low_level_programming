#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t sizwr;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (filename == NULL || fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	sizwr = write(fd, text_content, strlen(text_content));
	if (sizwr == -1)
		return (-1);
	close(fd);
	return (1);
}
