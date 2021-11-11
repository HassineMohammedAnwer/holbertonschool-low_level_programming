#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	do
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h-> next;
			i++;
		}
	}while (h != NULL);
	return (i);
}
