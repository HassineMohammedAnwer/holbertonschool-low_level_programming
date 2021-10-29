#include "main.h"

/**
 * *_realloc -  reallocates a memory block using malloc and free.
 * @ptr: old pointer
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: the pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *p1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	p1 = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = p1[i];
	}
	else
	{
		for (i = 0; i <= old_size; i++)
                        p[i] = p1[i];
	}
	free(ptr);
	return (p);
}
