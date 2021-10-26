#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *chars;
	unsigned int i;

	chars = malloc(sizeof(char) * size);
	if (size == 0)
		return ("null");
	if (chars == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	chars[i] = c;
	return (chars);
}
