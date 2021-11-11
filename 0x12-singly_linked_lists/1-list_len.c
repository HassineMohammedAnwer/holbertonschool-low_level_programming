#include "lists.h"

/**
 * print_list - check the code
 * @h: list
 * Return: Always number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
			i++;
		}
		else
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
